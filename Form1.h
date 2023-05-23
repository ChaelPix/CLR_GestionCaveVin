#pragma once

#include "Cave.h"

namespace CLR_GestionCaveVin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			MajCasierTxt();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ Box_Region;
	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtb_Domaine;

	private: System::Windows::Forms::TextBox^ txtb_Annee;
	private: System::Windows::Forms::TextBox^ txtb_Prix;
	private: System::Windows::Forms::TextBox^ txtb_nbBouteilles;
	private: System::Windows::Forms::Label^ txt_nbBouteilles;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btn_Ajouter;
	private: System::Windows::Forms::Button^ btn_Supprimer;


	private: System::Windows::Forms::Button^ btn_CasierPrecedent;

	private: System::Windows::Forms::Button^ btn_CasierSuivant;

	private: System::Windows::Forms::Label^ txt_Casier;
	private: System::Windows::Forms::Button^ btn_Sauvegarder;
	private: System::Windows::Forms::Button^ btn_Charger;
	private: System::Windows::Forms::ComboBox^ Box_TypeVin;
	private: System::Windows::Forms::Label^ txt_Erreur;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Box_Region = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtb_Domaine = (gcnew System::Windows::Forms::TextBox());
			this->txtb_Annee = (gcnew System::Windows::Forms::TextBox());
			this->txtb_Prix = (gcnew System::Windows::Forms::TextBox());
			this->txtb_nbBouteilles = (gcnew System::Windows::Forms::TextBox());
			this->txt_nbBouteilles = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->btn_Ajouter = (gcnew System::Windows::Forms::Button());
			this->btn_Supprimer = (gcnew System::Windows::Forms::Button());
			this->btn_CasierPrecedent = (gcnew System::Windows::Forms::Button());
			this->btn_CasierSuivant = (gcnew System::Windows::Forms::Button());
			this->txt_Casier = (gcnew System::Windows::Forms::Label());
			this->btn_Sauvegarder = (gcnew System::Windows::Forms::Button());
			this->btn_Charger = (gcnew System::Windows::Forms::Button());
			this->Box_TypeVin = (gcnew System::Windows::Forms::ComboBox());
			this->txt_Erreur = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 24));
			this->label1->Location = System::Drawing::Point(-8, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(900, 50);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ma Cave à Vin";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Box_Region
			// 
			this->Box_Region->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 14.25F));
			this->Box_Region->FormattingEnabled = true;
			this->Box_Region->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Alsace", L"Bordeaux", L"Bourgogne", L"Rhône" });
			this->Box_Region->Location = System::Drawing::Point(143, 94);
			this->Box_Region->Name = L"Box_Region";
			this->Box_Region->Size = System::Drawing::Size(176, 44);
			this->Box_Region->TabIndex = 1;
			this->Box_Region->Text = L"Alsace";
			this->Box_Region->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::Box_Region_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 18));
			this->label2->Location = System::Drawing::Point(-5, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 50);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Région :";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// txtb_Domaine
			// 
			this->txtb_Domaine->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtb_Domaine->Location = System::Drawing::Point(358, 312);
			this->txtb_Domaine->Name = L"txtb_Domaine";
			this->txtb_Domaine->Size = System::Drawing::Size(179, 23);
			this->txtb_Domaine->TabIndex = 3;
			this->txtb_Domaine->Text = L"Domaine";
			this->txtb_Domaine->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_Annee
			// 
			this->txtb_Annee->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtb_Annee->Location = System::Drawing::Point(358, 376);
			this->txtb_Annee->Name = L"txtb_Annee";
			this->txtb_Annee->Size = System::Drawing::Size(179, 23);
			this->txtb_Annee->TabIndex = 5;
			this->txtb_Annee->Text = L"Annee";
			this->txtb_Annee->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_Prix
			// 
			this->txtb_Prix->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtb_Prix->Location = System::Drawing::Point(358, 408);
			this->txtb_Prix->Name = L"txtb_Prix";
			this->txtb_Prix->Size = System::Drawing::Size(179, 23);
			this->txtb_Prix->TabIndex = 6;
			this->txtb_Prix->Text = L"Prix/bouteille";
			this->txtb_Prix->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txtb_nbBouteilles
			// 
			this->txtb_nbBouteilles->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtb_nbBouteilles->Location = System::Drawing::Point(358, 440);
			this->txtb_nbBouteilles->Name = L"txtb_nbBouteilles";
			this->txtb_nbBouteilles->Size = System::Drawing::Size(179, 23);
			this->txtb_nbBouteilles->TabIndex = 7;
			this->txtb_nbBouteilles->Text = L"xBouteilles";
			this->txtb_nbBouteilles->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_nbBouteilles
			// 
			this->txt_nbBouteilles->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 18));
			this->txt_nbBouteilles->Location = System::Drawing::Point(644, 88);
			this->txt_nbBouteilles->Name = L"txt_nbBouteilles";
			this->txt_nbBouteilles->Size = System::Drawing::Size(228, 50);
			this->txt_nbBouteilles->TabIndex = 8;
			this->txt_nbBouteilles->Text = L"Nb Bouteilles : 0";
			this->txt_nbBouteilles->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 11.25F));
			this->button1->Location = System::Drawing::Point(40, 168);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 45);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Modifier";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 11.25F));
			this->button2->Location = System::Drawing::Point(164, 168);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(118, 45);
			this->button2->TabIndex = 10;
			this->button2->Text = L"Consulter";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// btn_Ajouter
			// 
			this->btn_Ajouter->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 11.25F));
			this->btn_Ajouter->Location = System::Drawing::Point(322, 488);
			this->btn_Ajouter->Name = L"btn_Ajouter";
			this->btn_Ajouter->Size = System::Drawing::Size(118, 45);
			this->btn_Ajouter->TabIndex = 11;
			this->btn_Ajouter->Text = L"Ajouter";
			this->btn_Ajouter->UseVisualStyleBackColor = true;
			this->btn_Ajouter->Click += gcnew System::EventHandler(this, &Form1::btn_Ajouter_Click);
			// 
			// btn_Supprimer
			// 
			this->btn_Supprimer->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 11.25F));
			this->btn_Supprimer->Location = System::Drawing::Point(458, 488);
			this->btn_Supprimer->Name = L"btn_Supprimer";
			this->btn_Supprimer->Size = System::Drawing::Size(118, 45);
			this->btn_Supprimer->TabIndex = 12;
			this->btn_Supprimer->Text = L"Supprimer";
			this->btn_Supprimer->UseVisualStyleBackColor = true;
			// 
			// btn_CasierPrecedent
			// 
			this->btn_CasierPrecedent->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 11.25F));
			this->btn_CasierPrecedent->Location = System::Drawing::Point(286, 344);
			this->btn_CasierPrecedent->Name = L"btn_CasierPrecedent";
			this->btn_CasierPrecedent->Size = System::Drawing::Size(36, 45);
			this->btn_CasierPrecedent->TabIndex = 13;
			this->btn_CasierPrecedent->Text = L"<";
			this->btn_CasierPrecedent->UseVisualStyleBackColor = true;
			// 
			// btn_CasierSuivant
			// 
			this->btn_CasierSuivant->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 11.25F));
			this->btn_CasierSuivant->Location = System::Drawing::Point(562, 344);
			this->btn_CasierSuivant->Name = L"btn_CasierSuivant";
			this->btn_CasierSuivant->Size = System::Drawing::Size(37, 45);
			this->btn_CasierSuivant->TabIndex = 14;
			this->btn_CasierSuivant->Text = L">";
			this->btn_CasierSuivant->UseVisualStyleBackColor = true;
			// 
			// txt_Casier
			// 
			this->txt_Casier->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 18));
			this->txt_Casier->Location = System::Drawing::Point(334, 248);
			this->txt_Casier->Name = L"txt_Casier";
			this->txt_Casier->Size = System::Drawing::Size(241, 50);
			this->txt_Casier->TabIndex = 15;
			this->txt_Casier->Text = L"Casier #X/Y";
			this->txt_Casier->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_Sauvegarder
			// 
			this->btn_Sauvegarder->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 11.25F));
			this->btn_Sauvegarder->Location = System::Drawing::Point(12, 527);
			this->btn_Sauvegarder->Name = L"btn_Sauvegarder";
			this->btn_Sauvegarder->Size = System::Drawing::Size(118, 33);
			this->btn_Sauvegarder->TabIndex = 16;
			this->btn_Sauvegarder->Text = L"Sauvegarder";
			this->btn_Sauvegarder->UseVisualStyleBackColor = true;
			// 
			// btn_Charger
			// 
			this->btn_Charger->Font = (gcnew System::Drawing::Font(L"Reem Kufi", 11.25F));
			this->btn_Charger->Location = System::Drawing::Point(12, 566);
			this->btn_Charger->Name = L"btn_Charger";
			this->btn_Charger->Size = System::Drawing::Size(118, 33);
			this->btn_Charger->TabIndex = 17;
			this->btn_Charger->Text = L"Charger";
			this->btn_Charger->UseVisualStyleBackColor = true;
			// 
			// Box_TypeVin
			// 
			this->Box_TypeVin->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->Box_TypeVin->Font = (gcnew System::Drawing::Font(L"SimSun-ExtB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Box_TypeVin->FormattingEnabled = true;
			this->Box_TypeVin->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Rouge", L"Rose", L"Blanc" });
			this->Box_TypeVin->Location = System::Drawing::Point(358, 344);
			this->Box_TypeVin->Name = L"Box_TypeVin";
			this->Box_TypeVin->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Box_TypeVin->Size = System::Drawing::Size(179, 24);
			this->Box_TypeVin->TabIndex = 18;
			this->Box_TypeVin->Text = L"Rouge";
			// 
			// txt_Erreur
			// 
			this->txt_Erreur->Font = (gcnew System::Drawing::Font(L"Javanese Text", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txt_Erreur->ForeColor = System::Drawing::Color::Red;
			this->txt_Erreur->Location = System::Drawing::Point(143, 549);
			this->txt_Erreur->Name = L"txt_Erreur";
			this->txt_Erreur->Size = System::Drawing::Size(729, 40);
			this->txt_Erreur->TabIndex = 19;
			this->txt_Erreur->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(884, 611);
			this->Controls->Add(this->txt_Erreur);
			this->Controls->Add(this->Box_TypeVin);
			this->Controls->Add(this->btn_Charger);
			this->Controls->Add(this->btn_Sauvegarder);
			this->Controls->Add(this->txt_Casier);
			this->Controls->Add(this->btn_CasierSuivant);
			this->Controls->Add(this->btn_CasierPrecedent);
			this->Controls->Add(this->btn_Supprimer);
			this->Controls->Add(this->btn_Ajouter);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txt_nbBouteilles);
			this->Controls->Add(this->txtb_nbBouteilles);
			this->Controls->Add(this->txtb_Prix);
			this->Controls->Add(this->txtb_Annee);
			this->Controls->Add(this->txtb_Domaine);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Box_Region);
			this->Controls->Add(this->label1);
			this->Name = L"Form1";
			this->Text = L"Gestion Cave";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		Cave cave;
		int regionSelectionnee = 0;
		int casierSelectionne = 0;

		void MajCasierTxt()
		{
			int x = cave.recupNbCasiersRegion(regionSelectionnee);
			txt_Casier->Text = "Casier #" + casierSelectionne + "/" + x;
		}

		int StringIntSecurise(String^ s, String^ nomErreur)
		{
			int x;
			try
			{
				x = Convert::ToInt32(s);
			}
			catch (FormatException^)
			{
				txt_Erreur->Text = "ERREUR : " + nomErreur + " doit être un nombre";
				x = -1;
			}

			return x;
		}

	private: System::Void Box_Region_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		regionSelectionnee = Box_Region->SelectedIndex;
		MajCasierTxt();
	}

private: System::Void btn_Ajouter_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ domaine = txtb_Domaine->Text;
	Casier::TypeDeVin type = static_cast<Casier::TypeDeVin>(Box_TypeVin->SelectedIndex);

	int annee = StringIntSecurise(txtb_Annee->Text, "L'année");
	if (annee == -1) return;
	int prix = StringIntSecurise(txtb_Prix->Text, "Le prix");
	if (prix == -1) return;
	int nbBouteilles = StringIntSecurise(txtb_nbBouteilles->Text, "Le nombre de bouteilles");
	if (nbBouteilles == -1) return;

	txt_Erreur->Text = "";
	Casier^ casier = gcnew Casier(domaine, type, annee, nbBouteilles, prix);
	/*cave.AjouterCasierDansRegion(static_cast<Cave::Region>regionSelectionnee, casier);*/
}
};
}
