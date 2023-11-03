class Solution:
    def winnerOfGame(self, colors: str) -> bool:
        alice_point = 0
        bob_point = 0
        conz_a = 0
        conz_b = 0

        for i in colors:
            if i == "A":
                conz_a += 1
                conz_b = 0  # Reset conz_b if an A is encountered
                if conz_a >= 3:
                    alice_point += 1
            elif i == "B":
                conz_b += 1
                conz_a = 0  # Reset conz_a if a B is encountered
                if conz_b >= 3:
                    bob_point += 1
        return (alice_point > bob_point) #retuns false if bob's point > alice's point else returns true