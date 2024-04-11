#include <iostream>
#include <string>
#include <cctype>
#include <cassert>


using 
std::string;


// https://www.codewars.com/kata/546f922b54af40e1e90001da
string replace_alphabet_pos(string text) {
    
    string result = "";
    
    for(char c : text) {
        
        c = std::tolower(c);
        if (c >= 97 && c <= 122) {
            if (result != "") {
                result += " ";
            }
        result += std::to_string(c - 'a' + 1);
        }
    }
    
  
    return result;
}


int main(void) {

    assert(replace_alphabet_pos("The sunset sets at twelve o' clock.") == ("20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"));
    assert(replace_alphabet_pos("The narwhal bacons at midnight.") == ("20 8 5 14 1 18 23 8 1 12 2 1 3 15 14 19 1 20 13 9 4 14 9 7 8 20"));
    assert(replace_alphabet_pos("0123456789") == (""));
    assert(replace_alphabet_pos(",./<>?-_=+ ") == (""));
    assert(replace_alphabet_pos("") == (""));
    

    return 0;
}