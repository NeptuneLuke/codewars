#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <cassert>


bool narcissistic(int value){
    
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

    assert(narcissistic(1) == true);
	assert(narcissistic(5) == true);
	assert(narcissistic(7) == true);

    assert(narcissistic(153) == true);
	assert(narcissistic(370) == true);
	assert(narcissistic(371) == true);
    assert(narcissistic(1634) == true);

    std::srand(time(0));
	for(int i=0; i < 10; ++i) {
		int num = (rand() % 5 + 5) * 60000 + (rand() % 99 + 1);
		assert(narcissistic(num) == false);
	}


    return 0;
}