#pragma once

namespace VSSuperPack {

	//using namespace System;
	//using namespace System::ComponentModel;
	//using namespace System::Collections;
	//using namespace System::Windows::Forms;
	//using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)	delete components;
		}
	private:




	private: System::Windows::Forms::Label^  Caption;
	private: System::Windows::Forms::Button^  BTN_OK;
	private: System::Windows::Forms::Button^  BTN_Cancel;
	private: System::Windows::Forms::Label^  LBL_EDITOR;

	private: System::Windows::Forms::Label^  LBL_CIE;
	private: System::Windows::Forms::MaskedTextBox^  EDT_EDITOR;


	private: System::Windows::Forms::MaskedTextBox^  EDT_CIE;
	private: System::Windows::Forms::MaskedTextBox^  EDT_CAMPOS;

	private: System::Windows::Forms::Label^  LBL_CAMPOS;
	private: System::Windows::Forms::MaskedTextBox^  EDT_CAMROT;
	private: System::Windows::Forms::Label^  LBL_CAMROT;
	private: System::Windows::Forms::MaskedTextBox^  EDT_CLIPPING;
	private: System::Windows::Forms::Label^  LBL_CLIPPING;
	private: System::Windows::Forms::GroupBox^  GRP_DISPLAY;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::Label^  LBL_TOGGLEKEY;

	private: System::Windows::Forms::Label^  LBL_OUTPUT;
	private: System::Windows::Forms::ComboBox^  CMB_OUTPUT;
	private: System::Windows::Forms::Label^  LBL_KEYBOARD;
	private: System::Windows::Forms::ComboBox^  CMB_KEYBOARD;
	private: System::Windows::Forms::Label^  LBL_MOUSE;
	private: System::Windows::Forms::ComboBox^  CMB_MOUSE;
	private: System::Windows::Forms::Label^  LBL_GAMEPAD;
	private: System::Windows::Forms::ComboBox^  CMB_GAMEPAD;
	private: System::Windows::Forms::Label^  LBL_TOGGLEDESC;
	private: System::Windows::Forms::MaskedTextBox^  EDT_MOUSETILE;

	private: System::Windows::Forms::Label^  LBL_MOUSETILE;
	private: System::Windows::Forms::MaskedTextBox^  EDT_MOUSETILESIZE;
	private: System::Windows::Forms::Label^  LBL_MOUSETILESIZE;
	private: System::Windows::Forms::MaskedTextBox^  EDT_DEFPOINTER;
	private: System::Windows::Forms::Label^  LBL_DEFPOINTER;
	private: System::Windows::Forms::MaskedTextBox^  EDT_DEFINTERFACE;

	private: System::Windows::Forms::Label^  LBL_DEFINTERFACE;
	private: System::Windows::Forms::Label^  LBL_RESOLUTION;
	private: System::Windows::Forms::ComboBox^  CMB_RESOLUTION;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  CHK_ALTF4;
	private: System::Windows::Forms::PictureBox^  pictureBox1;












	



	protected:

	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->BTN_OK = (gcnew System::Windows::Forms::Button());
			this->BTN_Cancel = (gcnew System::Windows::Forms::Button());
			this->Caption = (gcnew System::Windows::Forms::Label());
			this->LBL_EDITOR = (gcnew System::Windows::Forms::Label());
			this->LBL_CIE = (gcnew System::Windows::Forms::Label());
			this->EDT_EDITOR = (gcnew System::Windows::Forms::MaskedTextBox());
			this->EDT_CIE = (gcnew System::Windows::Forms::MaskedTextBox());
			this->EDT_CAMPOS = (gcnew System::Windows::Forms::MaskedTextBox());
			this->LBL_CAMPOS = (gcnew System::Windows::Forms::Label());
			this->EDT_CAMROT = (gcnew System::Windows::Forms::MaskedTextBox());
			this->LBL_CAMROT = (gcnew System::Windows::Forms::Label());
			this->EDT_CLIPPING = (gcnew System::Windows::Forms::MaskedTextBox());
			this->LBL_CLIPPING = (gcnew System::Windows::Forms::Label());
			this->GRP_DISPLAY = (gcnew System::Windows::Forms::GroupBox());
			this->LBL_TOGGLEDESC = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->LBL_TOGGLEKEY = (gcnew System::Windows::Forms::Label());
			this->LBL_OUTPUT = (gcnew System::Windows::Forms::Label());
			this->CMB_OUTPUT = (gcnew System::Windows::Forms::ComboBox());
			this->LBL_KEYBOARD = (gcnew System::Windows::Forms::Label());
			this->CMB_KEYBOARD = (gcnew System::Windows::Forms::ComboBox());
			this->LBL_MOUSE = (gcnew System::Windows::Forms::Label());
			this->CMB_MOUSE = (gcnew System::Windows::Forms::ComboBox());
			this->LBL_GAMEPAD = (gcnew System::Windows::Forms::Label());
			this->CMB_GAMEPAD = (gcnew System::Windows::Forms::ComboBox());
			this->EDT_MOUSETILE = (gcnew System::Windows::Forms::MaskedTextBox());
			this->LBL_MOUSETILE = (gcnew System::Windows::Forms::Label());
			this->EDT_MOUSETILESIZE = (gcnew System::Windows::Forms::MaskedTextBox());
			this->LBL_MOUSETILESIZE = (gcnew System::Windows::Forms::Label());
			this->EDT_DEFPOINTER = (gcnew System::Windows::Forms::MaskedTextBox());
			this->LBL_DEFPOINTER = (gcnew System::Windows::Forms::Label());
			this->EDT_DEFINTERFACE = (gcnew System::Windows::Forms::MaskedTextBox());
			this->LBL_DEFINTERFACE = (gcnew System::Windows::Forms::Label());
			this->LBL_RESOLUTION = (gcnew System::Windows::Forms::Label());
			this->CMB_RESOLUTION = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->CHK_ALTF4 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->GRP_DISPLAY->SuspendLayout();
			///(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// BTN_OK
			// 
			this->BTN_OK->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BTN_OK->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->BTN_OK->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->BTN_OK->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->BTN_OK->Location = System::Drawing::Point(490, 472);
			this->BTN_OK->Name = L"BTN_OK";
			this->BTN_OK->Size = System::Drawing::Size(75, 23);
			this->BTN_OK->TabIndex = 6;
			this->BTN_OK->Text = L"OK";
			this->BTN_OK->UseVisualStyleBackColor = false;
			// 
			// BTN_Cancel
			// 
			this->BTN_Cancel->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BTN_Cancel->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BTN_Cancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->BTN_Cancel->FlatAppearance->BorderColor = System::Drawing::SystemColors::ActiveCaption;
			this->BTN_Cancel->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->BTN_Cancel->Location = System::Drawing::Point(571, 472);
			this->BTN_Cancel->Name = L"BTN_Cancel";
			this->BTN_Cancel->Size = System::Drawing::Size(75, 23);
			this->BTN_Cancel->TabIndex = 7;
			this->BTN_Cancel->Text = L"Cancel";
			this->BTN_Cancel->UseVisualStyleBackColor = false;
			// 
			// Caption
			// 
			this->Caption->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->Caption->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Caption->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Caption->Location = System::Drawing::Point(-2, -2);
			this->Caption->Name = L"Caption";
			this->Caption->Size = System::Drawing::Size(663, 28);
			this->Caption->TabIndex = 5;
			this->Caption->Text = L"Relentless X Core Wizard";
			this->Caption->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LBL_EDITOR
			// 
			this->LBL_EDITOR->AutoSize = true;
			this->LBL_EDITOR->Location = System::Drawing::Point(82, 40);
			this->LBL_EDITOR->Name = L"LBL_EDITOR";
			this->LBL_EDITOR->Size = System::Drawing::Size(34, 13);
			this->LBL_EDITOR->TabIndex = 9;
			this->LBL_EDITOR->Text = L"Editor";
			// 
			// LBL_CIE
			// 
			this->LBL_CIE->AutoSize = true;
			this->LBL_CIE->Location = System::Drawing::Point(65, 66);
			this->LBL_CIE->Name = L"LBL_CIE";
			this->LBL_CIE->Size = System::Drawing::Size(51, 13);
			this->LBL_CIE->TabIndex = 11;
			this->LBL_CIE->Text = L"Company";
			// 
			// EDT_EDITOR
			// 
			this->EDT_EDITOR->Location = System::Drawing::Point(122, 37);
			this->EDT_EDITOR->Name = L"EDT_EDITOR";
			this->EDT_EDITOR->Size = System::Drawing::Size(168, 20);
			this->EDT_EDITOR->TabIndex = 12;
			// 
			// EDT_CIE
			// 
			this->EDT_CIE->AsciiOnly = true;
			this->EDT_CIE->Location = System::Drawing::Point(122, 63);
			this->EDT_CIE->Name = L"EDT_CIE";
			this->EDT_CIE->ResetOnSpace = false;
			this->EDT_CIE->Size = System::Drawing::Size(168, 20);
			this->EDT_CIE->SkipLiterals = false;
			this->EDT_CIE->TabIndex = 13;
			this->EDT_CIE->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			this->EDT_CIE->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::EDt_CIE_KeyDown);
			// 
			// EDT_CAMPOS
			// 
			this->EDT_CAMPOS->AsciiOnly = true;
			this->EDT_CAMPOS->Location = System::Drawing::Point(122, 89);
			this->EDT_CAMPOS->Mask = L"00-|0|LL-0000";
			this->EDT_CAMPOS->Name = L"EDT_CAMPOS";
			this->EDT_CAMPOS->ResetOnSpace = false;
			this->EDT_CAMPOS->Size = System::Drawing::Size(168, 20);
			this->EDT_CAMPOS->SkipLiterals = false;
			this->EDT_CAMPOS->TabIndex = 15;
			this->EDT_CAMPOS->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// LBL_CAMPOS
			// 
			this->LBL_CAMPOS->AutoSize = true;
			this->LBL_CAMPOS->Location = System::Drawing::Point(33, 92);
			this->LBL_CAMPOS->Name = L"LBL_CAMPOS";
			this->LBL_CAMPOS->Size = System::Drawing::Size(83, 13);
			this->LBL_CAMPOS->TabIndex = 14;
			this->LBL_CAMPOS->Text = L"Camera Position";
			// 
			// EDT_CAMROT
			// 
			this->EDT_CAMROT->AsciiOnly = true;
			this->EDT_CAMROT->Location = System::Drawing::Point(122, 115);
			this->EDT_CAMROT->Mask = L"(9999, 9999, 9999)";
			this->EDT_CAMROT->Name = L"EDT_CAMROT";
			this->EDT_CAMROT->ResetOnSpace = false;
			this->EDT_CAMROT->Size = System::Drawing::Size(168, 20);
			this->EDT_CAMROT->SkipLiterals = false;
			this->EDT_CAMROT->TabIndex = 17;
			this->EDT_CAMROT->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// LBL_CAMROT
			// 
			this->LBL_CAMROT->AutoSize = true;
			this->LBL_CAMROT->Location = System::Drawing::Point(30, 118);
			this->LBL_CAMROT->Name = L"LBL_CAMROT";
			this->LBL_CAMROT->Size = System::Drawing::Size(86, 13);
			this->LBL_CAMROT->TabIndex = 16;
			this->LBL_CAMROT->Text = L"Camera Rotation";
			// 
			// EDT_CLIPPING
			// 
			this->EDT_CLIPPING->AsciiOnly = true;
			this->EDT_CLIPPING->Location = System::Drawing::Point(122, 141);
			this->EDT_CLIPPING->Mask = L"9999 @ 9999 with Y Fov  99.99";
			this->EDT_CLIPPING->Name = L"EDT_CLIPPING";
			this->EDT_CLIPPING->ResetOnSpace = false;
			this->EDT_CLIPPING->Size = System::Drawing::Size(168, 20);
			this->EDT_CLIPPING->SkipLiterals = false;
			this->EDT_CLIPPING->TabIndex = 19;
			this->EDT_CLIPPING->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// LBL_CLIPPING
			// 
			this->LBL_CLIPPING->AutoSize = true;
			this->LBL_CLIPPING->Location = System::Drawing::Point(16, 144);
			this->LBL_CLIPPING->Name = L"LBL_CLIPPING";
			this->LBL_CLIPPING->Size = System::Drawing::Size(100, 13);
			this->LBL_CLIPPING->TabIndex = 18;
			this->LBL_CLIPPING->Text = L"Near to Far Clipping";
			// 
			// GRP_DISPLAY
			// 
			this->GRP_DISPLAY->Controls->Add(this->LBL_TOGGLEDESC);
			this->GRP_DISPLAY->Controls->Add(this->maskedTextBox1);
			this->GRP_DISPLAY->Controls->Add(this->LBL_TOGGLEKEY);
			this->GRP_DISPLAY->Controls->Add(this->LBL_OUTPUT);
			this->GRP_DISPLAY->Controls->Add(this->CMB_OUTPUT);
			this->GRP_DISPLAY->Controls->Add(this->LBL_KEYBOARD);
			this->GRP_DISPLAY->Controls->Add(this->CMB_KEYBOARD);
			this->GRP_DISPLAY->Controls->Add(this->LBL_MOUSE);
			this->GRP_DISPLAY->Controls->Add(this->CMB_MOUSE);
			this->GRP_DISPLAY->Controls->Add(this->LBL_GAMEPAD);
			this->GRP_DISPLAY->Controls->Add(this->CMB_GAMEPAD);
			this->GRP_DISPLAY->Location = System::Drawing::Point(19, 167);
			this->GRP_DISPLAY->Name = L"GRP_DISPLAY";
			this->GRP_DISPLAY->Size = System::Drawing::Size(271, 174);
			this->GRP_DISPLAY->TabIndex = 20;
			this->GRP_DISPLAY->TabStop = false;
			this->GRP_DISPLAY->Text = L"Debug Display";
			// 
			// LBL_TOGGLEDESC
			// 
			this->LBL_TOGGLEDESC->AutoSize = true;
			this->LBL_TOGGLEDESC->Location = System::Drawing::Point(77, 150);
			this->LBL_TOGGLEDESC->Name = L"LBL_TOGGLEDESC";
			this->LBL_TOGGLEDESC->Size = System::Drawing::Size(164, 13);
			this->LBL_TOGGLEDESC->TabIndex = 29;
			this->LBL_TOGGLEDESC->Text = L"-1 : No key / Default : Tab [0x09]";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Location = System::Drawing::Point(80, 127);
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->Size = System::Drawing::Size(185, 20);
			this->maskedTextBox1->TabIndex = 22;
			// 
			// LBL_TOGGLEKEY
			// 
			this->LBL_TOGGLEKEY->AutoSize = true;
			this->LBL_TOGGLEKEY->Location = System::Drawing::Point(13, 130);
			this->LBL_TOGGLEKEY->Name = L"LBL_TOGGLEKEY";
			this->LBL_TOGGLEKEY->Size = System::Drawing::Size(61, 13);
			this->LBL_TOGGLEKEY->TabIndex = 21;
			this->LBL_TOGGLEKEY->Text = L"Toggle Key";
			// 
			// LBL_OUTPUT
			// 
			this->LBL_OUTPUT->AutoSize = true;
			this->LBL_OUTPUT->Location = System::Drawing::Point(35, 103);
			this->LBL_OUTPUT->Name = L"LBL_OUTPUT";
			this->LBL_OUTPUT->Size = System::Drawing::Size(39, 13);
			this->LBL_OUTPUT->TabIndex = 28;
			this->LBL_OUTPUT->Text = L"Output";
			// 
			// CMB_OUTPUT
			// 
			this->CMB_OUTPUT->FormattingEnabled = true;
			this->CMB_OUTPUT->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0   = Disable", L"1   = Enable", L"-1 = Enable and toggle lock" });
			this->CMB_OUTPUT->Location = System::Drawing::Point(80, 100);
			this->CMB_OUTPUT->Name = L"CMB_OUTPUT";
			this->CMB_OUTPUT->Size = System::Drawing::Size(185, 21);
			this->CMB_OUTPUT->TabIndex = 27;
			// 
			// LBL_KEYBOARD
			// 
			this->LBL_KEYBOARD->AutoSize = true;
			this->LBL_KEYBOARD->Location = System::Drawing::Point(22, 76);
			this->LBL_KEYBOARD->Name = L"LBL_KEYBOARD";
			this->LBL_KEYBOARD->Size = System::Drawing::Size(52, 13);
			this->LBL_KEYBOARD->TabIndex = 26;
			this->LBL_KEYBOARD->Text = L"Keyboard";
			// 
			// CMB_KEYBOARD
			// 
			this->CMB_KEYBOARD->FormattingEnabled = true;
			this->CMB_KEYBOARD->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0   = Disable", L"1   = Enable", L"-1 = Enable and toggle lock" });
			this->CMB_KEYBOARD->Location = System::Drawing::Point(80, 73);
			this->CMB_KEYBOARD->Name = L"CMB_KEYBOARD";
			this->CMB_KEYBOARD->Size = System::Drawing::Size(185, 21);
			this->CMB_KEYBOARD->TabIndex = 25;
			// 
			// LBL_MOUSE
			// 
			this->LBL_MOUSE->AutoSize = true;
			this->LBL_MOUSE->Location = System::Drawing::Point(35, 49);
			this->LBL_MOUSE->Name = L"LBL_MOUSE";
			this->LBL_MOUSE->Size = System::Drawing::Size(39, 13);
			this->LBL_MOUSE->TabIndex = 24;
			this->LBL_MOUSE->Text = L"Mouse";
			// 
			// CMB_MOUSE
			// 
			this->CMB_MOUSE->FormattingEnabled = true;
			this->CMB_MOUSE->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0   = Disable", L"1   = Enable", L"-1 = Enable and toggle lock" });
			this->CMB_MOUSE->Location = System::Drawing::Point(80, 46);
			this->CMB_MOUSE->Name = L"CMB_MOUSE";
			this->CMB_MOUSE->Size = System::Drawing::Size(185, 21);
			this->CMB_MOUSE->TabIndex = 23;
			// 
			// LBL_GAMEPAD
			// 
			this->LBL_GAMEPAD->AutoSize = true;
			this->LBL_GAMEPAD->Location = System::Drawing::Point(20, 22);
			this->LBL_GAMEPAD->Name = L"LBL_GAMEPAD";
			this->LBL_GAMEPAD->Size = System::Drawing::Size(54, 13);
			this->LBL_GAMEPAD->TabIndex = 22;
			this->LBL_GAMEPAD->Text = L"GamePad";
			// 
			// CMB_GAMEPAD
			// 
			this->CMB_GAMEPAD->FormattingEnabled = true;
			this->CMB_GAMEPAD->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"0   = Disable", L"1   = Enable", L"-1 = Enable and toggle lock" });
			this->CMB_GAMEPAD->Location = System::Drawing::Point(80, 19);
			this->CMB_GAMEPAD->Name = L"CMB_GAMEPAD";
			this->CMB_GAMEPAD->Size = System::Drawing::Size(185, 21);
			this->CMB_GAMEPAD->TabIndex = 21;
			// 
			// EDT_MOUSETILE
			// 
			this->EDT_MOUSETILE->AsciiOnly = true;
			this->EDT_MOUSETILE->Location = System::Drawing::Point(122, 347);
			this->EDT_MOUSETILE->Mask = L"99 by 99 tiles";
			this->EDT_MOUSETILE->Name = L"EDT_MOUSETILE";
			this->EDT_MOUSETILE->ResetOnSpace = false;
			this->EDT_MOUSETILE->Size = System::Drawing::Size(168, 20);
			this->EDT_MOUSETILE->SkipLiterals = false;
			this->EDT_MOUSETILE->TabIndex = 22;
			this->EDT_MOUSETILE->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// LBL_MOUSETILE
			// 
			this->LBL_MOUSETILE->AutoSize = true;
			this->LBL_MOUSETILE->Location = System::Drawing::Point(57, 350);
			this->LBL_MOUSETILE->Name = L"LBL_MOUSETILE";
			this->LBL_MOUSETILE->Size = System::Drawing::Size(55, 13);
			this->LBL_MOUSETILE->TabIndex = 21;
			this->LBL_MOUSETILE->Text = L"Mouse tile";
			// 
			// EDT_MOUSETILESIZE
			// 
			this->EDT_MOUSETILESIZE->AsciiOnly = true;
			this->EDT_MOUSETILESIZE->Location = System::Drawing::Point(122, 373);
			this->EDT_MOUSETILESIZE->Mask = L"90x90";
			this->EDT_MOUSETILESIZE->Name = L"EDT_MOUSETILESIZE";
			this->EDT_MOUSETILESIZE->ResetOnSpace = false;
			this->EDT_MOUSETILESIZE->Size = System::Drawing::Size(168, 20);
			this->EDT_MOUSETILESIZE->SkipLiterals = false;
			this->EDT_MOUSETILESIZE->TabIndex = 24;
			this->EDT_MOUSETILESIZE->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// LBL_MOUSETILESIZE
			// 
			this->LBL_MOUSETILESIZE->AutoSize = true;
			this->LBL_MOUSETILESIZE->Location = System::Drawing::Point(40, 376);
			this->LBL_MOUSETILESIZE->Name = L"LBL_MOUSETILESIZE";
			this->LBL_MOUSETILESIZE->Size = System::Drawing::Size(76, 13);
			this->LBL_MOUSETILESIZE->TabIndex = 23;
			this->LBL_MOUSETILESIZE->Text = L"Mouse tile size";
			// 
			// EDT_DEFPOINTER
			// 
			this->EDT_DEFPOINTER->AsciiOnly = true;
			this->EDT_DEFPOINTER->Location = System::Drawing::Point(122, 399);
			this->EDT_DEFPOINTER->Mask = L"00";
			this->EDT_DEFPOINTER->Name = L"EDT_DEFPOINTER";
			this->EDT_DEFPOINTER->ResetOnSpace = false;
			this->EDT_DEFPOINTER->Size = System::Drawing::Size(168, 20);
			this->EDT_DEFPOINTER->SkipLiterals = false;
			this->EDT_DEFPOINTER->TabIndex = 26;
			this->EDT_DEFPOINTER->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// LBL_DEFPOINTER
			// 
			this->LBL_DEFPOINTER->AutoSize = true;
			this->LBL_DEFPOINTER->Location = System::Drawing::Point(40, 402);
			this->LBL_DEFPOINTER->Name = L"LBL_DEFPOINTER";
			this->LBL_DEFPOINTER->Size = System::Drawing::Size(77, 13);
			this->LBL_DEFPOINTER->TabIndex = 25;
			this->LBL_DEFPOINTER->Text = L"Default Pointer";
			// 
			// EDT_DEFINTERFACE
			// 
			this->EDT_DEFINTERFACE->AsciiOnly = true;
			this->EDT_DEFINTERFACE->Location = System::Drawing::Point(122, 425);
			this->EDT_DEFINTERFACE->Mask = L"00";
			this->EDT_DEFINTERFACE->Name = L"EDT_DEFINTERFACE";
			this->EDT_DEFINTERFACE->ResetOnSpace = false;
			this->EDT_DEFINTERFACE->Size = System::Drawing::Size(168, 20);
			this->EDT_DEFINTERFACE->SkipLiterals = false;
			this->EDT_DEFINTERFACE->TabIndex = 28;
			this->EDT_DEFINTERFACE->TextMaskFormat = System::Windows::Forms::MaskFormat::ExcludePromptAndLiterals;
			// 
			// LBL_DEFINTERFACE
			// 
			this->LBL_DEFINTERFACE->AutoSize = true;
			this->LBL_DEFINTERFACE->Location = System::Drawing::Point(30, 428);
			this->LBL_DEFINTERFACE->Name = L"LBL_DEFINTERFACE";
			this->LBL_DEFINTERFACE->Size = System::Drawing::Size(86, 13);
			this->LBL_DEFINTERFACE->TabIndex = 27;
			this->LBL_DEFINTERFACE->Text = L"Default Interface";
			// 
			// LBL_RESOLUTION
			// 
			this->LBL_RESOLUTION->AutoSize = true;
			this->LBL_RESOLUTION->Location = System::Drawing::Point(42, 454);
			this->LBL_RESOLUTION->Name = L"LBL_RESOLUTION";
			this->LBL_RESOLUTION->Size = System::Drawing::Size(74, 13);
			this->LBL_RESOLUTION->TabIndex = 31;
			this->LBL_RESOLUTION->Text = L"Résolution XY";
			// 
			// CMB_RESOLUTION
			// 
			this->CMB_RESOLUTION->FormattingEnabled = true;
			this->CMB_RESOLUTION->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Desktop resolution", L"640x480 (4:3)", L"800x600 (4:3)",
					L"1024x768 (4:3)", L"1280x720 (SD - 16:9)", L"1920x1080 (HD - 16:9)", L""
			});
			this->CMB_RESOLUTION->Location = System::Drawing::Point(122, 451);
			this->CMB_RESOLUTION->Name = L"CMB_RESOLUTION";
			this->CMB_RESOLUTION->Size = System::Drawing::Size(168, 21);
			this->CMB_RESOLUTION->TabIndex = 30;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(233, 478);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->checkBox1->Size = System::Drawing::Size(57, 17);
			this->checkBox1->TabIndex = 32;
			this->checkBox1->Text = L"VSync";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// CHK_ALTF4
			// 
			this->CHK_ALTF4->AutoSize = true;
			this->CHK_ALTF4->Location = System::Drawing::Point(19, 478);
			this->CHK_ALTF4->Name = L"CHK_ALTF4";
			this->CHK_ALTF4->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->CHK_ALTF4->Size = System::Drawing::Size(178, 17);
			this->CHK_ALTF4->TabIndex = 33;
			this->CHK_ALTF4->Text = L"Enable ALT-F4 to close program";
			this->CHK_ALTF4->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(301, 38);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(344, 428);
			this->pictureBox1->TabIndex = 34;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(658, 508);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->CHK_ALTF4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->LBL_RESOLUTION);
			this->Controls->Add(this->EDT_DEFINTERFACE);
			this->Controls->Add(this->CMB_RESOLUTION);
			this->Controls->Add(this->LBL_DEFINTERFACE);
			this->Controls->Add(this->EDT_DEFPOINTER);
			this->Controls->Add(this->LBL_DEFPOINTER);
			this->Controls->Add(this->EDT_MOUSETILESIZE);
			this->Controls->Add(this->LBL_MOUSETILESIZE);
			this->Controls->Add(this->EDT_MOUSETILE);
			this->Controls->Add(this->LBL_MOUSETILE);
			this->Controls->Add(this->GRP_DISPLAY);
			this->Controls->Add(this->EDT_CLIPPING);
			this->Controls->Add(this->LBL_CLIPPING);
			this->Controls->Add(this->EDT_CAMROT);
			this->Controls->Add(this->LBL_CAMROT);
			this->Controls->Add(this->EDT_CAMPOS);
			this->Controls->Add(this->LBL_CAMPOS);
			this->Controls->Add(this->EDT_CIE);
			this->Controls->Add(this->EDT_EDITOR);
			this->Controls->Add(this->LBL_CIE);
			this->Controls->Add(this->LBL_EDITOR);
			this->Controls->Add(this->BTN_Cancel);
			this->Controls->Add(this->BTN_OK);
			this->Controls->Add(this->Caption);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->GRP_DISPLAY->ResumeLayout(false);
			this->GRP_DISPLAY->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EDt_CIE_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{		
		if (e->KeyCode == Keys::Space) 
			e->SuppressKeyPress = true;
	}
};
}
