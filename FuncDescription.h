//*** Macro definition ******************************************************
#ifndef _RELENTLESS_X_DOCDESCRIPTOR_H__
	#define _RELENTLESS_X_DOCDESCRIPTOR_H__

//+** Bugs ******************************************************************
//+ add extra comment on multi-line comment (/* ... */) use //
//+ add extra comment on "#include" string
//+ //* Exclusive (auto-remove comment) use "// My Command"
//+**************************************************************************

//*** Include **************************************************************
#include "Stdafx.h"

//*** Namespace definition *************************************************
namespace VSSuperPack
{
	//*** Class definition *****************************************************
	public ref class FuncDescript : public IDTExtensibility2 , public IDTCommandTarget
	{
		public:
			virtual void OnAddInsUpdate(System::Array ^%custom);
			virtual void OnBeginShutdown(System::Array ^%custom);
			virtual void OnStartupComplete(System::Array ^%custom);
			virtual void OnDisconnection(ext_DisconnectMode removeMode, System::Array ^%custom);
			virtual void OnConnection(System::Object ^Application, ext_ConnectMode ConnectMode, System::Object ^AddInInst, System::Array ^%custom);
			virtual void Exec(String ^CmdName, vsCommandExecOption ExecuteOption, Object ^%VariantIn, Object ^%VariantOut, bool %handled);
			virtual void QueryStatus(String ^CmdName, vsCommandStatusTextWanted NeededText, vsCommandStatus %StatusOption, Object ^%CommandText);

		private:
			DTE2^ m_DTE;
			AddIn^ m_AddIn;
	};

	//***************************************************************************
	//* Namespace     : VSSuperPack
	//* Class name    : FuncDescript
	//* Output        : void
	//* Function name : OnAddInsUpdate
	//* Description   : 
	//* Input         : System::Array ^%custom
	//***************************************************************************
	void VSSuperPack::FuncDescript::OnAddInsUpdate(System::Array ^%custom)
	{
	}

	//***************************************************************************
	//* Namespace     : VSSuperPack
	//* Class name    : FuncDescript
	//* Output        : void
	//* Function name : OnBeginShutdown
	//* Description   : 
	//* Input         : System::Array ^%custom
	//***************************************************************************
	void VSSuperPack::FuncDescript::OnBeginShutdown(System::Array ^%custom)
	{
	}

	//***************************************************************************
	//* Namespace     : VSSuperPack
	//* Class name    : FuncDescript
	//* Output        : void
	//* Function name : OnStartupComplete
	//* Description   : 
	//* Input         : System::Array ^%custom
	//***************************************************************************
	void VSSuperPack::FuncDescript::OnStartupComplete(System::Array ^%custom)
	{
	}

	//***************************************************************************
	//* Namespace     : VSSuperPack
	//* Class name    : FuncDescript
	//* Output        : void
	//* Function name : OnDisconnection
	//* Description   : 
	//* Input         : ext_DisconnectMode removeMode
	//*                 System::Array ^%custom
	//***************************************************************************
	void VSSuperPack::FuncDescript::OnDisconnection(ext_DisconnectMode removeMode, System::Array ^%custom)
	{
	}

	//***************************************************************************
	//* Namespace     : VSSuperPack
	//* Class name    : FuncDescript
	//* Output        : void
	//* Function name : OnConnection
	//* Description   : 
	//* Input         : System::Object ^Application
	//*                 ext_ConnectMode ConnectMode
	//*                 System::Object ^AddInInst
	//*                 System::Array ^%custom
	//***************************************************************************
	void VSSuperPack::FuncDescript::OnConnection(System::Object ^Application, ext_ConnectMode ConnectMode, System::Object ^AddInInst, System::Array ^%custom)
	{
		m_DTE = dynamic_cast<DTE2^>(Application);
		m_AddIn = dynamic_cast<AddIn^>(AddInInst);
		if (ConnectMode == ext_ConnectMode::ext_cm_UISetup)
		{
			array<System::Object^>^ contextGUIDs = gcnew array<System::Object^>(0);
			Commands2 ^commands = dynamic_cast<Commands2^>(m_DTE->Commands);
			String ^toolsMenuName = "Tools";

			_CommandBars ^commandBars = dynamic_cast<CommandBars^>(m_DTE->CommandBars);
			CommandBar ^menuBarCommandBar = dynamic_cast<CommandBar^>(commandBars["MenuBar"]);

			CommandBarControl ^toolsControl = menuBarCommandBar->Controls[toolsMenuName];
			CommandBarPopup ^toolsPopup = dynamic_cast<CommandBarPopup^>(toolsControl);

			try
			{
				Command ^command = commands->AddNamedCommand2(m_AddIn, "VSSuperPack", "Function Description", "Executes the command for VSSuperPack", true, 59, contextGUIDs, (int)vsCommandStatus::vsCommandStatusSupported + (int)vsCommandStatus::vsCommandStatusEnabled, (int)vsCommandStyle::vsCommandStylePictAndText, vsCommandControlType::vsCommandControlTypeButton);

				if ((command) && (toolsPopup))
				{
					command->AddControl(toolsPopup->CommandBar, 1);
				}
			}
			catch (System::ArgumentException ^)
			{
			}
		}
	}

	//***************************************************************************
	//* Namespace     : VSSuperPack
	//* Class name    : FuncDescript
	//* Output        : void
	//* Function name : Exec
	//* Description   : 
	//* Input         : String ^CmdName
	//*                 vsCommandExecOption ExecuteOption
	//*                 Object ^%VariantIn
	//*                 Object ^%VariantOut
	//*                 bool %handled
	//***************************************************************************
	void VSSuperPack::FuncDescript::Exec(String ^CmdName, vsCommandExecOption ExecuteOption, Object ^%VariantIn, Object ^%VariantOut, bool %handled)
	{
		handled = false;
		if (ExecuteOption == vsCommandExecOption::vsCommandExecOptionDoDefault)
		{
			if (!CmdName->CompareTo("VSSuperPack.FuncDescript.VSSuperPack"))
			{
				TextDocument^ TxtDoc = (TextDocument^)m_DTE->DTE->ActiveDocument->Object("TextDocument");

				if (TxtDoc->Language == "C/C++")
				{
					TextSelection^ TxtSel = TxtDoc->Selection;
					Type^ TypeID = TextSelection::typeid;
					PropertyInfo^ PropInfo = TypeID->GetProperty("Text");

					TxtSel->StartOfDocument(false);
					String^ LastCommand = "";

					while (TxtSel->ActivePoint->AtEndOfDocument != true)
					{
						TxtSel->SelectLine();

						String^ Function = (String^)PropInfo->GetValue(TxtSel, nullptr);
						String^ ShortDescription = "";

						if (Function->Contains("//*") && !Function->Contains("\""))
							TxtSel->Delete(1);

						String^ ReposCarac = Function->Substring(0, Function->Length - Function->TrimStart()->Length);

						if (Function->Contains("#endif") && LastCommand != "#endif" && !Function->Contains("\""))
						{
							ShortDescription = ReposCarac + "//*** End macro definition *************************************************\r\n";
							LastCommand = "#endif";
						}

						if (Function->Contains("#ifndef") && LastCommand != "#ifndef" && !Function->Contains("\""))
						{
							ShortDescription = ReposCarac + "//*** Macro definition ****************************************************\r\n";
							LastCommand = "#ifndef";
						}

						if (Function->Contains("#pragma") && LastCommand != "#pragma" && !Function->Contains("\""))
						{
							ShortDescription = ReposCarac + "//*** Define **************************************************************\r\n";
							LastCommand = "#pragma";
						}

						if ((Function->Contains("#include \"") || Function->Contains("#include <")) && LastCommand != "#include")
						{
							ShortDescription = ReposCarac + "//*** Include **************************************************************\r\n";
							LastCommand = "#include";
						}

						if (Function->Contains("namespace") && LastCommand != "namespace" && !Function->Contains("\""))
						{
							ShortDescription = ReposCarac + "//*** Namespace definition *************************************************\r\n";
							LastCommand = "namespace";
						}

						if (Function->Contains("class") && LastCommand != "class" && !Function->Contains("\""))
						{
							ShortDescription = ReposCarac + "//*** Class definition *****************************************************\r\n";
							LastCommand = "class";
						}

						if (Function->Contains("BEGIN_MESSAGE_MAP") && LastCommand != "BEGIN_MESSAGE_MAP" && !Function->Contains("\""))
						{
							ShortDescription = ReposCarac + "//*** Message Map **********************************************************\r\n";
							LastCommand = "BEGIN_MESSAGE_MAP";
						}

						if (Function->Contains("[Platform::MTAThread]") || Function->Contains("main("))
						{
							if (LastCommand == "MainSeq")
								Function = "";
							else if (!Function->Contains("\""))
								ShortDescription = ReposCarac + "//*** Main Sequence ********************************************************\r\n";

							LastCommand = "MainSeq";
						}

						if (Function->Contains("theApp") && LastCommand != "theApp" && !Function->Contains("\""))
						{
							ShortDescription = ReposCarac + "//*** Main Application *****************************************************\r\n";
							LastCommand = "theApp";
						}

						Function = Function->Trim();
						if (Function->EndsWith(";"))
						{
							Function = "";
							ShortDescription = "";
						}

						if (ShortDescription != "")
						{
							TxtSel->StartOfLine(vsStartOfLineOptions::vsStartOfLineOptionsFirstColumn, false);
							TxtSel->LineUp(false, 1);
							TxtSel->Insert(ShortDescription, (int)vsInsertFlags::vsInsertFlagsInsertAtEnd);
							TxtSel->LineDown(false, 1);
							Function = "";
						}

						String^ Params = "";
						String^ Output = "";
						String^ Namespace = "";
						String^ Class = "";

						if (Function != "")
						{
							int TempPosStart = Function->IndexOf("(") + 1;
							int TempPosEnd = Function->IndexOf(")");

							if (TempPosStart != -1 && TempPosEnd != -1)
							{
								Params = Function->Substring(TempPosStart, TempPosEnd - TempPosStart);
								Params = Params->Trim();

								Function = Function->Substring(0, TempPosStart - 1);
								Function = Function->Trim();

								TempPosStart = Function->IndexOf(" ");

								if (TempPosStart != -1)
								{
									Output = Function->Substring(0, TempPosStart);
									Output = Output->Trim();
									Function = Function->Substring(TempPosStart);
									Function = Function->Trim();
								}

								array<String^>^ Split;
								array<String^>^ FuncDelim = { "::" };
								Split = Function->Split(FuncDelim, StringSplitOptions::RemoveEmptyEntries);
								array<String^>::Reverse(Split);

								Function = Split[0]->Trim();
								if (Split->Length >= 2) Class = Split[1]->Trim();
								if (Split->Length == 3) Namespace = Split[2]->Trim();

								if (Function == "if" || Function == "catch" || Function == "for" || Function == "while") Function = "";

								if (Function != "")
								{
									TxtSel->StartOfLine(vsStartOfLineOptions::vsStartOfLineOptionsFirstColumn, false);
									TxtSel->LineUp(false, 1);
									TxtSel->Insert(ReposCarac + "//***************************************************************************\r\n", (int)vsInsertFlags::vsInsertFlagsInsertAtEnd);
									if (Namespace != "")
										TxtSel->Insert(ReposCarac + "//* Namespace     : " + Namespace + "\r\n", (int)vsInsertFlags::vsInsertFlagsInsertAtEnd);
									if (Class != "")
										TxtSel->Insert(ReposCarac + "//* Class name    : " + Class + "\r\n", (int)vsInsertFlags::vsInsertFlagsInsertAtEnd);
									if (Output != "")
										TxtSel->Insert(ReposCarac + "//* Output        : " + Output + "\r\n", (int)vsInsertFlags::vsInsertFlagsInsertAtEnd);

									TxtSel->Insert(ReposCarac + "//* Function name : " + Function + "\r\n", (int)vsInsertFlags::vsInsertFlagsInsertAtEnd);

									String^ Description = "";

									if (Output == "")
										Description = Function->Contains("~") ? "Destructeur" : "Constructeur";

									TxtSel->Insert(ReposCarac + "//* Description   : " + Description + "\r\n", (int)vsInsertFlags::vsInsertFlagsInsertAtEnd);

									array<String^>^ ParamDelim = { "," };
									Split = Params->Split(ParamDelim, StringSplitOptions::RemoveEmptyEntries);

									for (int i = 0; i < Split->Length; i++)
									{
										if (i == 0)
											TxtSel->Insert(ReposCarac + "//* Input         : " + Split[i]->Trim() + "\r\n", (int)vsInsertFlags::vsInsertFlagsInsertAtEnd);
										else
											TxtSel->Insert(ReposCarac + "//*                 " + Split[i]->Trim() + "\r\n", (int)vsInsertFlags::vsInsertFlagsInsertAtEnd);
									}

									TxtSel->Insert(ReposCarac + "//***************************************************************************\r\n", (int)vsInsertFlags::vsInsertFlagsInsertAtEnd);
									TxtSel->LineDown(false, 1);
								}
							}
						}
					}
				}

				handled = true;
				return;
			}
		}
	}

	//***************************************************************************
	//* Namespace     : VSSuperPack
	//* Class name    : FuncDescript
	//* Output        : void
	//* Function name : QueryStatus
	//* Description   : 
	//* Input         : String ^CmdName
	//*                 vsCommandStatusTextWanted NeededText
	//*                 vsCommandStatus %StatusOption
	//*                 Object ^%CommandText
	//***************************************************************************
	void VSSuperPack::FuncDescript::QueryStatus(String ^CmdName, vsCommandStatusTextWanted NeededText, vsCommandStatus %StatusOption, Object ^%CommandText)
	{
		if (NeededText == vsCommandStatusTextWanted::vsCommandStatusTextWantedNone)
		{
			if (!CmdName->CompareTo("VSSuperPack.FuncDescript.VSSuperPack"))
			{
				StatusOption = (vsCommandStatus)(vsCommandStatus::vsCommandStatusSupported + vsCommandStatus::vsCommandStatusEnabled);
				return;
			}
		}
	}
}

//*** End Macro definition **************************************************
#endif