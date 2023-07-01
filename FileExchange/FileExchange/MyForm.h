#pragma once
#include <ctime> 
#include<iostream> 
namespace FileExchange {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ inname;
	protected:

	protected:

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ innumber;


	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;




	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;

	private: String^ num;
	private: String^ name;
	private: System::Windows::Forms::ListBox^ listBox1;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->inname = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->innumber = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->SuspendLayout();
			// 
			// inname
			// 
			this->inname->Location = System::Drawing::Point(741, 59);
			this->inname->Name = L"inname";
			this->inname->Size = System::Drawing::Size(111, 22);
			this->inname->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(628, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(207, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Регистрация новой заявки";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(584, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(268, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Сформировать заявку";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// innumber
			// 
			this->innumber->FormattingEnabled = true;
			this->innumber->Location = System::Drawing::Point(794, 120);
			this->innumber->Name = L"innumber";
			this->innumber->Size = System::Drawing::Size(58, 24);
			this->innumber->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(581, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 16);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Введите имя заявки:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(581, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(176, 32);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Введите запрашиваемый \r\nномер числа:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(210, 18);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(174, 16);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Существующие заявки";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label5->Location = System::Drawing::Point(22, 65);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(84, 18);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Имя заявки";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Location = System::Drawing::Point(112, 65);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 18);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Дата обновления";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label7->Location = System::Drawing::Point(247, 65);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(137, 18);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Статус обновления";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label8->Location = System::Drawing::Point(395, 65);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 18);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Запрос";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label9->Location = System::Drawing::Point(459, 65);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(79, 18);
			this->label9->TabIndex = 12;
			this->label9->Text = L"Результат";
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(22, 112);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(516, 356);
			this->listBox1->TabIndex = 13;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 503);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->innumber);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->inname);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Обработка заявок";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {	
	using namespace std;
	this->num = this->innumber->Text;
	this->name = this->inname->Text;
	String^ kol = num;
	String^ entry_name = name;
	time_t now = time(0);
	char* dt = ctime(&now);
	String^ status = "Сформировано";
	String^	fib= "-";
	String^ entry;
	entry = "Заявка №" + entry_name + "          " + Convert::ToString(&now) + "                 " + status + "                  " + "№" + kol + "                 " + fib;
	listBox1->Items->Add(entry);
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void list_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}

