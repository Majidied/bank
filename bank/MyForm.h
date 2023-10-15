#pragma once

namespace bank {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pn_login;
	protected:

	private: System::Windows::Forms::Panel^ pn_admin;
	protected:

	private: System::Windows::Forms::Panel^ pn_client;

	private: System::Windows::Forms::Panel^ principal_panel;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label1;





	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pn_login = (gcnew System::Windows::Forms::Panel());
			this->pn_admin = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pn_client = (gcnew System::Windows::Forms::Panel());
			this->principal_panel = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pn_admin->SuspendLayout();
			this->principal_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// pn_login
			// 
			this->pn_login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_login->Location = System::Drawing::Point(0, 0);
			this->pn_login->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->pn_login->Name = L"pn_login";
			this->pn_login->Size = System::Drawing::Size(854, 428);
			this->pn_login->TabIndex = 0;
			// 
			// pn_admin
			// 
			this->pn_admin->Controls->Add(this->label1);
			this->pn_admin->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_admin->Location = System::Drawing::Point(0, 0);
			this->pn_admin->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->pn_admin->Name = L"pn_admin";
			this->pn_admin->Size = System::Drawing::Size(854, 428);
			this->pn_admin->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"bo3bo3";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// pn_client
			// 
			this->pn_client->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_client->Location = System::Drawing::Point(0, 0);
			this->pn_client->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->pn_client->Name = L"pn_client";
			this->pn_client->Size = System::Drawing::Size(854, 428);
			this->pn_client->TabIndex = 2;
			// 
			// principal_panel
			// 
			this->principal_panel->Controls->Add(this->button2);
			this->principal_panel->Controls->Add(this->button1);
			this->principal_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->principal_panel->Location = System::Drawing::Point(0, 0);
			this->principal_panel->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->principal_panel->Name = L"principal_panel";
			this->principal_panel->Size = System::Drawing::Size(854, 428);
			this->principal_panel->TabIndex = 3;
			this->principal_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::principal_panel_Paint);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(543, 115);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(150, 119);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(138, 115);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(178, 119);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 428);
			this->Controls->Add(this->principal_panel);
			this->Controls->Add(this->pn_admin);
			this->Controls->Add(this->pn_client);
			this->Controls->Add(this->pn_login);
			this->Margin = System::Windows::Forms::Padding(2, 4, 2, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->pn_admin->ResumeLayout(false);
			this->pn_admin->PerformLayout();
			this->principal_panel->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void principal_panel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
