// Classwork30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "textbox.h"

int main()
{
	TextBox t1("AAAAHHHH!!");
	TextBox t2;
	t2.printText();
	t1.printText();
	t1.setText("HELLO WORLD!");
	t1.printText();
	t1.setText("GOODBYE WORLD!");

	std::cout << std::endl << t1.getText() << std::endl;
}
