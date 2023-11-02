class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(), [](int a, int b){
            if(countone(a)!=countone(b)){
                return countone(a)<countone(b);
            }
            else{
                return a<b;
            }
        });
        return arr;

    }
    static int countone(int n){
        int count=0;
        while(n>0){
            count+=n%2;
            n=n/2;
        }
        return count;
    }
};