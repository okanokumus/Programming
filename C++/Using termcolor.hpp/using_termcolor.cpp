// this is the intro to how to use termcolor.hpp that is written by Ihor Kalnytskyi
// more information :  https://termcolor.readthedocs.io/
#include "io.h"
#include <iostream>
#include <windows.h>
#include "termcolor.hpp"
using namespace std;

int main() {
	/*
	The manipulators are divided into three groups :
	foreground, which changes text color;
	background, which changes text background color;
	attributes, which changes some text style(bold, underline, etc).
	*/

	// foreground, which changes text color;
	// colored strings such that red, green
	cout << termcolor::red << "red color on the terminal" << endl;
	cout << termcolor::green << "green color on the terminal" << endl;
	cout << termcolor::grey << "grey color on the terminal" << endl;
	cout << termcolor::yellow << "yellow color on the terminal" << endl;
	cout << termcolor::blue << "blue color on the terminal" << endl;
	cout << termcolor::magenta << "magenta color on the terminal" << endl;
	cout << termcolor::white << "white color on the terminal" << endl;
	cout << termcolor::cyan << "cyan color on the terminal" << endl;

	cout << termcolor::reset << "#####" << endl;
	// to reset the terminal
	cout << termcolor::reset << "default terminal setting"<< endl ;
	
	//background, which changes text background color;
	// colored background such that red, green
	cout << termcolor::on_red << "on red color" << endl;
	cout << termcolor::on_green << "on green color" << endl;
	cout << termcolor::on_grey << "on grey color" << endl;
	cout << termcolor::on_yellow << "on yellow color" << endl;
	cout << termcolor::on_blue << "on blue color" << endl;
	cout << termcolor::on_magenta << "on magenta color" << endl;
	cout << termcolor::on_white << "on white color" << endl;
	cout << termcolor::on_cyan << "on cyan color" << endl;


	//attributes, which changes some text style(bold, underline, etc).
	cin.get();
	cin.ignore();
	return 0;
}