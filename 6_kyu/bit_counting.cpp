#include <iostream>
#include <cassert>


// https://www.codewars.com/kata/526571aae218b8ee490006f4
int count_bit(unsigned long long n) {
    
    int count_one = 0;
    while(n >= 1) {
        if(n%2 != 0) {
            count_one++;
        }
        n = n/2;
    }

    return count_one;
}


int main(void) {

    assert(count_bit(0) == 0);
    assert(count_bit(4) == 1);
    assert(count_bit(7) == 3);
    assert(count_bit(9) == 2);
    assert(count_bit(10) == 2);
    assert(count_bit(26) == 3);
    assert(count_bit(77231418) == 14);
    assert(count_bit(12525589) == 11);
    assert(count_bit(3811) == 8);
    assert(count_bit(392902058) == 17);

    return 0;
}