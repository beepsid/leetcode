class Solution {
public:
    int integerBreak(int n) {
        int value=0;
        if(n<=3){
            return n-1;
        }
        else if(n%3==0){
            value=(n/3);
            return pow(3,value);
        }
        else if(n%3==1){
            value=((n/3)-1);
            value= pow(3,value);
            return value*4;
        }
        else{
            value=(n/3);
            value= pow(3,value);
            return value*2;
        }
    }
};

