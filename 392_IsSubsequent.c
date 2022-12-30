/*
    Given two strings s and t, return true if s is a subsequence of t, or false otherwise.
    A subsequence of a string is a new string that is formed from the 
    original string by deleting some (can be none) of the characters without 
    disturbing the relative positions of the remaining characters. 
    (i.e., "ace" is a subsequence of "abcde" while "aec" is not).
*/

bool isSubsequence(char * s, char * t){
    while(*t){
        s += *s == *t++;
    }
    return !*s;
}

/*
    Example 1:

        Input: s = "abc", t = "ahbgdc"
        Output: true

    Example 2:

        Input: s = "axc", t = "ahbgdc"
        Output: false
*/
/*
    Just go through t and "cross off" the matching characters in s. 
    Then return whether there's nothing left in s.
    here it's helpful that C strings are null terminated and 
    that I can easily pop off a string's first character in constant time just by incrementing the pointer.
*/