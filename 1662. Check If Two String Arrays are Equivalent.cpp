/*
    Problem Link:-https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/
    
    Approach:- Implementation problem
    combine the vector of strings into one word and then compare.
*/
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        string s1;
        for(int i=0;i<word1.size();i++)
            s1+=word1[i];
        string s2;
        for(int i=0;i<word2.size();i++)
            s2+=word2[i];
        return s1==s2;
    }
};