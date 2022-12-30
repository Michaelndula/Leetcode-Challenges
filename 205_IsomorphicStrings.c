#include "stdio.h";

/*
    Given two strings s and t, determine if they are isomorphic.
    Two strings s and t are isomorphic if the characters in s can be replaced to get t.
    All occurrences of a character must be replaced with another character while preserving 
    the order of characters. No two characters may map to the same character, 
    but a character may map to itself.
*/

bool isIsomorphic(char * s, char * t){
    char arrS[256] = {0};
    char arrT[256] = {0};

    int i = 0;

    while(s[i] != 0){
        if(arrS[s[i]] == 0 && arrT[t[i]] == 0){
            arrS[s[i]] = t[i];
            arrT[t[i]] = s[i];
        }
        else
        if(arrS[s[i]] != t[i] || arrT[t[i]] != s[i]){
            return false;
        }
        i++;
    }
    return true;
}
/*
    Example 1:
        Input: s = "egg", t = "add"
        Output: true

    Example 2:
        Input: s = "foo", t = "bar"
        Output: false

    Example 3:
        Input: s = "paper", t = "title"
        Output: true
*/
/*
    Constraints:

    1 <= s.length <= 5 * 104
    t.length == s.length
    s and t consist of any valid ascii character.
*/