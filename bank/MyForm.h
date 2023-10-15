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
			this->pn_client = (gcnew System::Windows::Forms::Panel());
			this->principal_panel = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// pn_login
			// 
			this->pn_login->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_login->Location = System::Drawing::Point(0, 0);
			this->pn_login->Name = L"pn_login";
			this->pn_login->Size = System::Drawing::Size(854, 427);
			this->pn_login->TabIndex = 0;
			// 
			// pn_admin
			// 
			this->pn_admin->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_admin->Location = System::Drawing::Point(0, 0);
			this->pn_admin->Name = L"pn_admin";
			this->pn_admin->Size = System::Drawing::Size(854, 427);
			this->pn_admin->TabIndex = 1;
			// 
			// pn_client
			// 
			this->pn_client->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_client->Location = System::Drawing::Point(0, 0);
			this->pn_client->Name = L"pn_client";
			this->pn_client->Size = System::Drawing::Size(854, 427);
			this->pn_client->TabIndex = 2;
			// 
			// principal_panel
			// 
			this->principal_panel->Dock = System::Windows::Forms::DockStyle::Fill;
			this->principal_panel->Location = System::Drawing::Point(0, 0);
			this->principal_panel->Name = L"principal_panel";
			this->principal_panel->Size = System::Drawing::Size(854, 427);
			this->principal_panel->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 427);
			this->Controls->Add(this->principal_panel);
			this->Controls->Add(this->pn_client);
			this->Controls->Add(this->pn_admin);
			this->Controls->Add(this->pn_login);
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
