#include <iostream>
#include <vector>
#include <cassert>


using
std::vector;


// https://www.codewars.com/kata/556deca17c58da83c00002db
vector<int> tribonacci(vector<int> signature, int n) {
    
    if(n == 0) {
		return {};
    }

    vector<int> result (signature.begin(), signature.end());
    
    for(int i = signature.size() ; i < n; ++i) {
        result.push_back(result[i-1] + result[i-2] + result[i-3]); 
    }

    for(int i = result.size()-1; i >= n; --i) {
        result.pop_back();
    }
    
    return result;
}


int main(void) {

    vector<int> signature = { 1, 1, 1 };
    vector<int> expected = { 1, 1, 1, 3, 5, 9, 17, 31, 57, 105 };
    assert(tribonacci(signature, 10) == (expected));

    signature = { 0, 0, 1 };
    expected = { 0, 0, 1, 1, 2, 4, 7, 13, 24, 44 };
    assert(tribonacci(signature, 10) == (expected));

    signature = { 0, 1, 1 };
    expected = { 0, 1, 1, 2, 4, 7, 13, 24, 44, 81 };
    assert(tribonacci(signature, 10) == (expected));
    
    signature = { 1, 0, 0 };
    expected = { 1, 0, 0, 1, 1, 2, 4, 7, 13, 24 };
    assert(tribonacci(signature, 10) == (expected));

    signature = { 1, 2, 3 };
    expected = { 1, 2, 3, 6, 11, 20, 37, 68, 125, 230 };
    assert(tribonacci(signature, 10) == (expected));

    signature = { 1, 2, 3 };
    expected = { 1, 2 };
    assert(tribonacci(signature, 2) == (expected));

    signature = { 1, 2, rand() % 10 };
    expected = {};
    assert(tribonacci(signature, 0) == (expected));

    return 0;
}