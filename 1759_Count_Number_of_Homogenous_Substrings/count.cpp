class Solution {
public:
    int countHomogenous(string s) {
        long long count = 0;
        long long res = 0;
        char prev;
        int m = 1000000007;
        for(auto i:s){
            if(i==prev){
                count++;
            }
            else{
                count=1;
            }
            res=res+count;
            prev = i;
        }
        return res%m;
    }
};