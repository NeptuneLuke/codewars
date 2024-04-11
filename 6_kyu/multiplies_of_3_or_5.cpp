#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>


// https://www.codewars.com/kata/514b92a657cdc65150000006
int multiplies(int number) {
    
    if(number < 0) {
        return 0;
    }
    
    int sum = 0;
    for(int i=0; i < number; i++) {
        
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    
    return sum;
}


int main(void) {

    assert(multiplies(10) == 23);
    assert(multiplies(20) == 78);
    assert(multiplies(200) == 9168);

    assert(multiplies(-1) == 0);
    assert(multiplies(0) == 0);
    assert(multiplies(1) == 0);
    assert(multiplies(2) == 0);
    assert(multiplies(3) == 0);
    assert(multiplies(4) == 3);
    assert(multiplies(5) == 3);
    assert(multiplies(6) == 8);


    return 0;
}
