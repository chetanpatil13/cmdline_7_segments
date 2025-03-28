// Project : cmdline_7_segments
// Date    : 25 March 2025
// Author  : Chetan Patil

/*
* MIT License
*
* Copyright (c) 2025 Chetan Patil
*
* Permission is hereby granted, free of charge, to any person obtaining a copy
* of this software and associated documentation files (the "Software"), to deal
* in the Software without restriction, including without limitation the rights
* to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
* copies of the Software, and to permit persons to whom the Software is
* furnished to do so, subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included in all
* copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
* AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
* OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
* SOFTWARE.
*/


#include<iostream>
#include<windows.h>
#include "seven_segments.hpp"

using namespace std;

void demo(void) {
	SevenSegments sevenSegment;

	for (int num = 0; num < 10; num++)
		sevenSegment.printDigit(num);

	for (char ch = 'A'; ch <= 'Z'; ch++)
		sevenSegment.printLetter(ch);
}

void numberCouting() {
	SevenSegments sevenSegment;

	for (int num = 0; num < 10; num++) {
		sevenSegment.printDigit(num);
		Sleep(750);
		system("cls");
	}
}

void lettersInLoop() {
	SevenSegments sevenSegment;
	
	for (char ch = 'A'; ch <= 'Z'; ch++) {
		sevenSegment.printLetter(ch);
		Sleep(750);
		system("cls");
	}
}

int main(){
	cout << "Command Line : 7 Segments Demo :: " << endl;

	// Uncomment below line to print digits and letters once
	//demo();

	while (true) {
		// Uncomment to print letters A to Z in loop 
		lettersInLoop();
		
		// Uncomment to print digits 0 to 9 in loop 
		// numberCouting();
	}

	return 0;
}
