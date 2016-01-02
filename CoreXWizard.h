//*** Macro definition ******************************************************
#ifndef _RELENTLESS_X_COREXWIZZARD_H__
	#define _RELENTLESS_X_COREWIZZARD_H__

#include "Stdafx.h"

namespace VSSuperPack
{
	public ref class CoreXWizard : public IDTWizard
	{
		public:
			virtual void Execute(Object^ Application, int hwndOwner, array<Object^>^% ContextParams, array<Object^>^% CustomParams, wizardResult% retval);
			void AddConfig();
			VCConfiguration^ GetProfile(Object^ ProfileName);
			void SetCommonConfig(Object^ ProfileName);
			void SetDebugConfig(Object^ ProfileName);
			void SetDistributionConfig(Object^ ProfileName);
			void AddFilters();
		
		private:
			DTE2^ m_dte;

	};

	void VSSuperPack::CoreXWizard::Execute(Object^ Application, int hwndOwner, array<Object^>^% ContextParams, array<Object^>^% CustomParams, wizardResult% retval)
	{
		MyForm MainDlg;

		if (MainDlg.ShowDialog() == DialogResult::OK)
		{
			m_dte = (DTE2^)Application;
			Solution^ Soln = m_dte->Solution;

			Soln->Create("E:\\aa", "Ma Solution");
			Soln->AddFromTemplate("E:\\Default.vcxproj", "E:\\aa", "MonProj", true);
			AddConfig();
			AddFilters();

			Soln->SaveAs(L"E:\\aa\\MonProj.sln");
		}

	};

	void VSSuperPack::CoreXWizard::AddConfig()
	{
		//CommonConfig
		SetCommonConfig("Debug|Win32");
		SetCommonConfig("Debug|x64");
		SetCommonConfig("Release|Win32");
		SetCommonConfig("Release|x64");
		SetCommonConfig("Package and distribute|Win32");
		SetCommonConfig("Package and distribute|x64");

		//DebugConfig
		SetDebugConfig("Debug|Win32");
		SetDebugConfig("Debug|x64");

		//Package and Distribute
		SetDistributionConfig("Package and distribute|Win32");
		SetDistributionConfig("Package and distribute|x64");
	};

	VCConfiguration^ VSSuperPack::CoreXWizard::GetProfile(Object^ ProfileName)
	{
		VCProject^ Proj = (VCProject^)m_dte->Solution->Projects->Item(1)->Object;
		return (VCConfiguration^)((IVCCollection^)Proj->Configurations)->Item(ProfileName);
	};

	void VSSuperPack::CoreXWizard::SetCommonConfig(Object^ ProfileName)
	{
		VCConfiguration^ Config = GetProfile(ProfileName);

		Config->ConfigurationType = ConfigurationTypes::typeApplication;
		Config->useOfMfc = useOfMfc::useMfcStatic;
		Config->CharacterSet = charSet::charSetUnicode;

		VCCLCompilerTool^ Compiler = (VCCLCompilerTool^)((IVCCollection^)Config->Tools)->Item("VCCLCompilerTool");
		Compiler->RuntimeLibrary = runtimeLibraryOption::rtMultiThreaded;
		Compiler->BasicRuntimeChecks = basicRuntimeCheckOption::runtimeBasicCheckNone;

		VCLinkerTool^ Linker = (VCLinkerTool^)((IVCCollection^)Config->Tools)->Item("VCLinkerTool");
		Linker->UACExecutionLevel = linkUACExecutionLevel::linkUACExecutionLevelRequireAdministrator;

	};

	void VSSuperPack::CoreXWizard::SetDebugConfig(Object^ ProfileName)
	{
		VCConfiguration^ Config = GetProfile(ProfileName);
					
		Type^ TypeID = VCConfiguration::typeid;
		PropertyInfo^ PropInfo = TypeID->GetProperty("Platform");

		Object^ Plat = (Object^)PropInfo->GetValue(Config, nullptr);

		MessageBox::Show(Plat->ToString()); 

		//Config->Platform
		//Config->Platform = "v100";

		VCCLCompilerTool^ Compiler = (VCCLCompilerTool^)((IVCCollection^)Config->Tools)->Item("VCCLCompilerTool");
		Compiler->RuntimeLibrary = runtimeLibraryOption::rtMultiThreadedDebug;
		Compiler->BasicRuntimeChecks = basicRuntimeCheckOption::runtimeBasicCheckAll;
	};

	void VSSuperPack::CoreXWizard::SetDistributionConfig(Object^ ProfileName)
	{
		VCConfiguration^ Config = GetProfile(ProfileName);
		VCPostBuildEventTool^ PostBuild = (VCPostBuildEventTool^)((IVCCollection^)Config->Tools)->Item("VCPostBuildEventTool");

		//var ProjectPath = wizard.FindSymbol('PROJECT_PATH');
		//var ProjectName = wizard.FindSymbol('PROJECT_NAME');

		//var ArchivePath = wizard.FindSymbol('ARCHIVE').replace(/ \\\\ / g, "\\");
		//var DistributionPath = wizard.FindSymbol('DISTRIBUTION').replace(/ \\\\ / g, "\\");
		PostBuild->Description = "Package and Distribute";
		PostBuild->CommandLine = "Allo";
		//PostTool->CommandLine = "if not exist \"" + DistributionPath + "\\.\" md \"" + DistributionPath + "\"\r\n";
		//PostTool.CommandLine += "\"$(RADFOLDER)Tool\\ScragXDBBuilder\" /c \"" + ArchivePath + "\" \"" + DistributionPath + "\\Setup.dat\"\r\n";
		//PostTool.CommandLine += "copy \"" + ProjectPath + "\\Package and distribute\\" + ProjectName + ".exe\" \"" + DistributionPath + "\\Setup.exe\"\r\n";
	};

	void VSSuperPack::CoreXWizard::AddFilters()
	{
		VCProject^ Proj = (VCProject^)m_dte->Solution->Projects->Item(1)->Object;

		VCFilter^ group = (VCFilter^)Proj->AddFilter("Source Files");
		group->Filter = "cpp;c;cc;cxx;def;odl;idl;hpj;bat;asm;asmx";

		group = (VCFilter^)Proj->AddFilter("Header Files");
		group->Filter = "h;hpp;hxx;hm;inl;inc;xsd";

		group = (VCFilter^)Proj->AddFilter("Resource Files");
		group->Filter = "rc;ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe;resx;tiff;tif;png;wav";
	};
}

#endif
