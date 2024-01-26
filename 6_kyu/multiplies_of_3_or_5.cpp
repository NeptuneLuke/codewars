#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>


// https://www.codewars.com/kata/514b92a657cdc65150000006
int solution(int number) {
    
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

    assert(solution(10) == 23);
    assert(solution(20) == 78);
    assert(solution(200) == 9168);

    assert(solution(-1) == 0);
    assert(solution(0) == 0);
    assert(solution(1) == 0);
    assert(solution(2) == 0);
    assert(solution(3) == 0);
    assert(solution(4) == 3);
    assert(solution(5) == 3);
    assert(solution(6) == 8);


    return 0;
}
