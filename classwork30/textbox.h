#pragma once
#include <iostream>
class TextBox {
private:
	std::string text;

public:

	//constructors
	TextBox();
	explicit TextBox(std::string text);

	std::string getText();
	void setText(std::string text);
	void printText();
};