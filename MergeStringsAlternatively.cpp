class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        int l1=word1.length();
        int l2=word2.length();
        string s="";
        while(i<l1 && j<l2)
        {
            s+=word1[i++];
            s+=word2[j++];
        }

        while(i<l1)
        s.push_back(word1[i++]);

        while(j<l2)
        s.push_back(word2[j++]);
        return s;
    }
};
