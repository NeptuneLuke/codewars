#include <iostream>
#include <vector>
#include <string>
#include <cassert>


using
std::string;


// https://www.codewars.com/kata/525f50e3b73515a6db000b83
string create_phone_number(const int array[10]) {
    
    std::string phone = "(";
    for(int i = 0; i < 10; ++i) {
    
        if(i == 3) {
            phone += ")";
            phone += " ";
            phone += std::to_string(array[i]);
        }
        else if(i == 6) {
            phone += "-";
            phone += std::to_string(array[i]);
        }
        else {
            phone += std::to_string(array[i]);
        }
    }
  
    return phone;
}


int main(void) {

    using array = int[10];

    assert(create_phone_number(array{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) == ("(123) 456-7890"));
    assert(create_phone_number(array{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}) == ("(111) 111-1111"));
    assert(create_phone_number(array{1, 2, 3, 4, 5, 6, 8, 8, 0, 0}) == ("(123) 456-8800"));
    assert(create_phone_number(array{0, 2, 3, 0, 5, 6, 0, 8, 9, 0}) == ("(023) 056-0890"));
    assert(create_phone_number(array{0, 0, 0, 0, 0, 0, 0, 0, 0, 0}) == ("(000) 000-0000"));

    return 0;
}