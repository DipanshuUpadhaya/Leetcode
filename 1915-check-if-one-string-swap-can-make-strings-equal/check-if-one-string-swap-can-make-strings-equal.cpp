class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        if(n1!=n2){
            return false;
        }

        int idx=-1;
        for(int i=0;i<n1;i++){
            if(s1[i]!=s2[i]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            return true;
        }

        for(int i=idx+1;i<n1;i++){
            if(s1[i]!=s2[i]){
                swap(s1[i],s1[idx]);
                return s1==s2;
            }
           
        }
        return false;
    }
};