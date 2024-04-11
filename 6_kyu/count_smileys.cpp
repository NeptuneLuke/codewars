#include <iostream>
#include <vector>
#include <string>
#include <cassert>


using
std::vector,
std::string;


// https://www.codewars.com/kata/583203e6eb35d7980400002a
int count_smileys(vector<string> arr) {
    
    /*
    std::regex smiley_regex("^[:;][-~]?[)D]$");
    int count = 0;
    for(std::string emote : arr){
        if(std::regex_match(emote, smiley_regex))
        count++;
    }
    return count;
    */

    if(arr.size() == 0) {
        return 0;
    }
    
    int count = 0;
    for(string smiley : arr) {

        if(smiley.size() == 2 
           && (smiley[0] == ':' || smiley[0] == ';')
           && (smiley[1] == ')' || smiley[1] == 'D') ) {
            
            count++;
           }

        if(smiley.size() == 3 
           && (smiley[0] == ':' || smiley[0] == ';')
           && (smiley[1] == '-' || smiley[1] == '~')
           && (smiley[2] == ')' || smiley[2] == 'D') ) {
            
            count++;
           }
    }
  
    return count;
}


int main(void) {

    assert(count_smileys({}) == 0);
    assert(count_smileys({":D", ":~)", ";~)", ":)"}) == 4);
    assert(count_smileys({":)", ":(", ":D", ":O", ":;"}) == 2);      
    assert(count_smileys({";]", ":[", ";*", ":$", ";-D"}) == 1);   

    return 0;
}