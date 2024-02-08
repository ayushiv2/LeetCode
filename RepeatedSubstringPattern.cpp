class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        unordered_map<string, int> map;
        string str="";
        for(int i=0;i<s.length()-1;i++)
        {
            str+=s[i];
            map[str]++;
        }
        for(auto i:map){
            string s1=i.first;
            if(s.size()%s1.size()==0){
                int n=s.size()/s1.size();
                string s2="";
                while(n){
                    s2+=s1;
                    n--;
                }
                if(s2==s) 
                {
                   return true; 
                }
            }
        }
        return false;
    }
};
