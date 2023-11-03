class Solution {
public:
    bool winnerOfGame(string colors) {
        int alice_point=0;
        int bob_point=0;
        int conz_a=0;
        int conz_b=0;

        for(char i : colors){
            if(i=='A'){
                conz_a++;
                conz_b=0;
                if(conz_a>=3){
                    alice_point++;
                }
            }
            else if(i=='B'){
                conz_b++;
                conz_a=0;
                if(conz_b>=3){
                    bob_point++;
                }
            }
        }
        return alice_point>bob_point;
    }
};