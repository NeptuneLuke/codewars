#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>


using 
std::cout,
std::cin;

// https://www.codewars.com/kata/multiples-of-3-or-5
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

    assert(solution(10) == 23 && "Success");
    assert(solution(20) == 78 && "Success");
    assert(solution(200) == 9168 && "Success");

    assert(solution(-1) == 0 && "Success");
    assert(solution(0) == 0 && "Success");
    assert(solution(1) == 0 && "Success");
    assert(solution(2) == 0 && "Success");
    assert(solution(3) == 0 && "Success");
    assert(solution(4) == 3 && "Success");
    assert(solution(5) == 3 && "Success");
    assert(solution(6) == 8 && "Success");

    return 0;
}
