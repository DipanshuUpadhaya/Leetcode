class Solution {
public:
    bool checkVowel(string s){
        bool freq[5]={false};
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                freq[0]=true;
            }else if(s[i]=='e'){
                freq[1]=true;
            }else if(s[i]=='i'){
                freq[2]=true;
            }else if(s[i]=='o'){
                freq[3]=true;
            }else if(s[i]=='u'){
                freq[4]=true;
            }else{
                return false;
            }
        }
        for(int i=0;i<5;i++){
            if(freq[i]==false){
                return false;
            }
        }
        return true;
    }
    int countVowelSubstrings(string word) {
        int n=word.length();
        int count=0;
        for(int st=0;st<n;st++){
            string subword="";
            for(int end=st;end<n;end++){
                subword+=word[end];
                if(checkVowel(subword)==true){
                    count++;
                }
            }
        }
        return count;
    }
};