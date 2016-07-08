//
//  main.cpp
//  ConvertDigit
//
//  Created by Brent Perry on 7/8/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    vector<string> numbers = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> digits = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    string input;
    string output = " ";
    bool to_continue = true;
    bool found = false;
    
    while (to_continue) {
        cout << "Please enter a number 1-9, either the digit or spelled out is fine ('|' to quit): \n";
        cin >> input;
        
        if (input == "|") {
            to_continue = false;
            break;
        }
        
        for (int i = 0; i < numbers.size(); ++i) {
            if (numbers[i] == input) {
                found = true;
                output = digits[i];
            }
            
        }
        
        if (!found) {
            for (int j = 0; j < digits.size(); ++j) {
                if (digits[j] == input) {
                    found = true;
                    output = numbers[j];
                }
            }
        }
        if (!found) {
            cout << "You didn't enter a number between 0-9 or zero-nine.\n";
            to_continue = false;
            break;
        }
        
        cout << "You entered '" << input << "'; which is the same as '" << output << "'.\n";
        found = false;
    }
    
    
}
