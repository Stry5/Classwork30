#include "textbox.h"
//constructors
	TextBox::TextBox() {
		this->text = "Hello";
	}
	TextBox::TextBox(std::string text) {
		setText(text);
	}


	std::string TextBox::getText() {
		return text;
	}

	void TextBox::setText(std::string text){
		this->text = text;
	}

	void TextBox::printText(){
		std::cout << text;
	}