// Project : Demo for 10 Segments LED Display
// Date : 04 March 2025
// Author : Chetan Patil

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


#pragma once

class SevenSegments {
private:
    char digits_0_9[30][3] = {
        // for digit 0
        {' ',  '_', ' '},
        {'\'', ' ', '\''},
        {'\'', '_', '\''},

        // for digit 1
        {' ', ' ', ' '},
        {' ', ' ', '\''},
        {' ', ' ', '\''},

        // for digit 2
        {' ',  '_', ' '},
        {' ',  '_', '\''},
        {'\'', '_', ' '},

        // for digit 3
        {' ', '_', ' '},
        {' ', '_', '\''},
        {' ', '_', '\''},

        // for digit 4
        {' ',  ' ', ' '},
        {'\'', '_', '\''},
        {' ',  ' ', '\''},

        // for digit 5
        {' ',  '_', ' '},
        {'\'', '_', ' '},
        {' ',  '_', '\''},

        // for digit 6
        {' ',  '_', ' '},
        {'\'', '_', ' '},
        {'\'', '_', '\''},

        // for digit 7
        {' ', '_', ' '},
        {' ', ' ', '\''},
        {' ', ' ', '\''},

        // for digit 8
        {' ',  '_', ' '},
        {'\'', '_', '\''},
        {'\'', '_', '\''},

        // for digit 9
        {' ',  '_', ' '},
        {'\'', '_', '\''},
        {' ',  '_', '\''}
    };

    char letters_A_Z[78][3] = {
        // for letter A
        {' ', '_',  ' ' },
        {'\'', '_', '\''},
        {'\'', ' ', '\''},

        // for letter B
        {' ',  '_', ' ' },
        {'\'', '_', '\''},
        {'\'', '_', '\''},

        // for letter C
        {' ',  '_', ' '},
        {'\'', ' ', ' '},
        {'\'', '_', ' '},

        // for letter D
        {' ',  '_', ' ' },
        {'\'', ' ', '\''},
        {'\'', '_', '\''},

        // for letter E
        {' ',  '_', ' '},
        {'\'', '_', ' '},
        {'\'', '_', ' '},

        // for letter F
        {' ',  '_', ' '},
        {'\'', '_', ' '},
        {'\'', ' ', ' '},

        // for letter G
        {' ',  '_', ' ' },
        {'\'', '_', ' ' },
        {'\'', '_', '\''},

        // for letter  H
        {' ',  ' ', ' ' },
        {'\'', '_', '\''},
        {'\'', ' ', '\''},

        // for letter  I
        {' ', ' ', ' ' },
        {' ', ' ', '\''},
        {' ', ' ', '\''},

        // for letter  J
        {' ', ' ', ' ' },
        {' ', ' ', '\''},
        {' ', '_', '\''},

        // for letter K
        {' ',  ' ', ' '},
        {'\'', '_', '_'},
        {'\'', ' ', ' '},

        // for letter L
        {' ',  ' ', ' '},
        {'\'', ' ', ' '},
        {'\'', '_', ' '},

        // for letter M
        {' ',  '_', ' ' },
        {'\'', ' ', '\''},
        {'\'', ' ', '\''},

        // for letter N
        {' ',  ' ', ' ' },
        {'\'', ' ', '\''},
        {'\'', ' ', '\''},

        // for letter O
        {' ',  '_', ' ' },
        {'\'', ' ', '\''},
        {'\'', '_', '\''},

        // for letter P
        {' ',  '_', ' ' },
        {'\'', '_', '\''},
        {'\'', ' ', ' ' },

        // for letter Q
        {' ',  '_', ' ' },
        {'\'', ' ', '\''},
        {'\'', '_', ' ' },

        // for letter R
        {' ',  '_', ' ' },
        {'\'', '_', '\''},
        {'\'', ' ', '\''},

        // for letter S
        {' ',  '_', ' '},
        {'\'', '_', ' '},
        {' ', '_', '\''},

        // for letter T
        {' ', '_', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '},

        // for letter U
        {' ',  ' ', ' ' },
        {'\'', ' ', '\''},
        {'\'', '_', '\''},

        // for letter V
        {' ',  ' ', ' ' },
        {'\'', ' ', '\''},
        {' ',  '_', ' ' },

        // for letter W
        {' ',  ' ', ' ' },
        {'\'', ' ', '\''},
        {'\'', '_', '\''},

        // for letter X
        {' ',  ' ', ' ' },
        {'\'', ' ', '\''},
        {'\'', ' ', '\''},

        // for letter Y
        {' ',  ' ',  ' '},
        {'\'', '_', '\''},
        {' ',  '_', ' ' },

        // for letter Z
        {' ', '_',  ' ' },
        {' ', '_',  '\''},
        {'\'', '_', ' ' },
    };

public:
    SevenSegments() = default;
    void printDigit(unsigned char number);
    void printLetter(unsigned char ch);
};
