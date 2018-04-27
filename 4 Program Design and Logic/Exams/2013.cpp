/*
2a \1 Logic\3.3S Coursework

b i)
1. AX[P(X)->Q(X)]
2. ~E[Q(Y)] |- ~EX[P(X)]
  3. EX[P(X)]            Assume
  4. P(a)->Q(a)          AE,1
    5. P(a)              Assume
    6. Q(a)              ->E,4,5
    7. EX[Q(X)]          EI,6
  8. EX[Q(X)]            EE,3,5,7
9. ~EX[P(X)]             RAA,2,3,8

1. AX[P(X)->Q(X)]
2. AX[S(X)->M(X)vN(X)]
3. ~EX[Q(X)]
4. AX[N(X)->AY(R(Y)->P(Y)]
5. EX[R(X)->~EY(M(Y))]
6. ~EX[P(X)]
7. P(a)->Q(a)              AE,1
8. S(a)->M(a)vN(a)         AE,2
9. N(a)->AY(R(Y)->P(Y)]    AE,4
  10. S(a)                 Assume
  11. M(a)vN(a)            ->E,8,10
  12. ~EX[R(X)]v~EY[M(Y)]  Implication,5,Natural Deduce Seperately
  13. ~(EX[R(X)]^EY[M(Y)]  De Morgan
    14. R(a)               Assume
    15. EX[R(X)]           EI,14
      16.EY[M(Y)]          Assume
      17. EX[R(X)]^EY[m(Y)] ^I,15,16
    18. ~EY[M(Y)]           RAA,16,13,17


Equivalence Lemma Proofs
AX(A->B)
AX(~AvB)
~~AX[~AvB)
~AX[~A->B]
EX(A->B)

3
*/
#include <iostream>
#include <string>
using namespace std;

class bicycle {
private:
	int ID;
	string make;
	int price;
};

class customer {
private:
	string name;
	float balance;
public:
	float deposit(int amount);
};

class shop {

};