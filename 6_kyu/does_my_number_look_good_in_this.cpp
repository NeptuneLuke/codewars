#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>


// https://www.codewars.com/kata/5287e858c6b5a9678200083c
bool solution(int value){
    
    int sum = 0;
    int digits = 0;
    int x = value;
    for( ; x > 0; ++digits) {
        x = x/10;
    }

    x = value;
    for( ; x > 0; ) {

        sum += std::pow(x%10, digits);
        x = x / 10;
    }
    
    return sum == value;
}


int main(void) {

    assert(solution(1) == true);
	assert(solution(5) == true);
	assert(solution(7) == true);

    assert(solution(153) == true);
	assert(solution(370) == true);
	assert(solution(371) == true);
    assert(solution(1634) == true);

    std::srand(time(0));
	for(int i=0; i < 10; ++i) {
		int num = (rand() % 5 + 5) * 60000 + (rand() % 99 + 1);
		assert(solution(num) == false);
	}


    return 0;
}