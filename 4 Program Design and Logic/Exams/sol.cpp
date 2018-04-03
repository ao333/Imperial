1 Propositional Logic 1
Show: A->B = ~(A^~B)
(~AvB)
~~(~AvB)
~(A^~B)

Show: A<->B = (A^B)v(~A^~B)
(A->B)^(B->A)
(~AvB)^(~BvA)
((~AvB)^~B)v(~AvB)^A)
((~A^~B)v(B^~B))v((~A^A)v(B^A))
(~A^~B)v(B^A)
(A^B)v(~A^~B)

Show: A<->B = ~A<->~B
(A->B)^(B->A)
(~AvB)^(~BvA)
(Bv~A)^(Av~B)
(~~Bv~A)^(~~Av~B)
(~B->~A)^(~A->~B)
(~A->~B)^(~B->~A)
~A<->~B

Show ~(P<->Q) = (PvQ)^~(P^Q)
~((P->Q)^(Q->P))
~((~PvQ)^(~QvP)) Implication
~((~P^~Q)v(~P^P)v(Q^~Q)v(Q^P) Distributive
~((~P^~Q)v(P^Q)) Inconsistency
~(~P^~Q)^~(P^Q) Double Negation
(PvQ)^~(P^Q) Double Negation


1.1 Propositional Logic
Thief: AvBvC
A^~B->C = ~(A^~B)vC = ~AvBvC = ~Av(~~BvC) = ~Av(~B->C) = A->(~B->C)
B->C
C->~(B->A) = C->~(~BvA) = C->(B^~A)

Assume A is true(1)
~B->C
B->C
C {Dilemma}
B^~A (Both B and ~A have to be true)
A is inconsistent with ~A

BvC (A is not true)
C->B
B->C
B<->C (Since at least 1 has to be a thief, and A is not, then B and C are both thiefs)


2.1S Predicate Logic
#6 ~AX,Y,Z(lecture(X)^lecture(Y)^~same(X,Y)^office(Z)^has(X,Z)^has(Y,Z))
#6 AL,X,Y(lecture(L)^office(X)^office(Y)^~same(X,Y)->~(has(L,X)^has(L,Y)))
#8 AX(phd(X)->EA(office(X)^has(X,A)) ^ AX(phd(X)->EY,Z(phd(Y)^office(Z)^has(Y,Z)^has(X,Z))
If at least 2/more than 1 EY,Z(office(Y)^office(Z)^has(X,Y)^has(X,Z)^~same(X,Y))


3 Predicate Logic 2
AX(cautious(X) v normal(X) -> EY shelter(Y,X))
~EX~(cautious(X) v normal(X) -> EY shelter(Y,X)) | AX P(X)=~EX ~P9X)
~EX~(~(cautious(X) v normal(X)) v EY shelter(Y,X)) | P->Q=~PvQ
~EX~~(cautious(X) v normal(X)) ^ ~EY shelter(Y,X)) | De Morgan
~EX(cautious(X) v normal(X)) ^ ~EY shelter(Y,X)) | Double Negation


4 Propositional Logic 2
Show A->B, B->C |- A->C
1. A->B (Given)
2. B->C (Given)
  3. A (Assume)
  4. B (1,3,->E)
  5. C (2,4,->E)

Show Q->R |- (P->Q)->(P->R)
1. Q->R (Given)
  2. P->Q (Assume)
    3. P (Assume)
    4. Q (2,3,->E)
    5. R (1,4,->E)
  6. P->R (3,5,->I)
7. (P->Q)->(P->R) (2,6,->I)

Show X->Y |- ~Y->~X (Contraposition)
1. X->Y
  2. ~Y (Assume)
    3. X (Assume)
    4. Y (1,3,->E)
  5. ~X (3,4,2,RAA)
6. ~Y->~X (1,5,->I)

Show XvY, X->Z, Y->Z |- Z (Proof by cases)
1. XvY (Given)
2. X->Z (Given)
3. Y->Z (Given)
  4. ~Z (Assume)
    5. X (Assume)
    6. Z (2,5,->E)
  7. ~X (5,6,4,RAA)
  8. Y (Assume)
    9. Z (3,8,->E)
  10. ~Y (8,9,4,RAA)
  11. Y (1,7,Inconsistency,vE)
12. Z (10,11,4,RAA)

Show snow,mild->~snow |- ~mild 
1. snow (Given)
2. mild->~snow (Given)
  3. mild (Assume)
  4. ~snow (2,3,->E)
5. ~mild (3,4,1,RAA)

Prove Elections
1. E->LvT (Given)
2. ~U->~L (Given)
3. E (Given)

  4. ~T (Assume)
  5. L (v E)
  6. L->U (Contraposition)
  7. U (6,->E)
8. ~T->U (4,7,->I)

Prove Elections 2
1. L
2. ~U->~L

  3. ~U (Assume)
  4. ~L (2,3,->E)
5. U (3,4,1,RAA)

  3. ~~Uv~L (Implication)
  4. Uv~L (Double Negation)
  5. ~LvU (Commutative)
  6. L->U (Implication)
7. U (1,7,->E)

  3. ~~Uv~L (Implication)
  4. ~~U (1,3,Lv~L tautology, forcing ~~U to be True in OR Truth Table) 
5. U (4, Double Negation)

  3. ~~L (1,Double Negation)
  4. ~~U (1,3,Modus Tollens)
5. U (4, Double Negation)

Exercise C: Show CutvTaxvPR
1. TvLvD (Given)
2. T->Cut (Given)
3. L->Tax (Given)
4. D->PR (Given)
5. TvLvD->CutvTaxvPR (2,3,4,A)
6. CutvTaxvPR (1,5,->E)


6 Predicate Logic 3
1. AX(G(X)vS(X)->GP(X))
2. G(Martin)vS(Martin)
  3. G(Martin)vS(Martin)->GP(Martin) (1,AE)
  4. GP(Martin) (3,4,->E)

1. AX(message(X)->encrypted(X))
2. AX(encrypted(X)->secure(X))
  3. message(m)->encrypted(m) (1,AE)
  4. encrypted(m)->secure(m) (2,AE)
5. message(m)->secure(m) (3,4,->I)
6. AX(message(X)->secure(X)) (5,AI)

5. message(m) (Assume)
6. encrypted(m) (3,5,->E)
7. secure(m) (4,6,->E)

E-Elimination
1. EX(m(X)^p(X))
  2. m(f)^p(f) (Assume)
  3. p(f) (2^E)
  4. EX(p(X) (3,EI)
5. p(X) (1,2,4,EE)

1. EX(hack(X,f)
2. AX,F(hack(X,F)->stolen(X,F)vhelp(X))
  3. hack(s,f) (Assume)
  4. AF(hack(s,F)->stolen(s,F)vhelp(s)) (2,AE)
  5. hack(s,f)->stolen(s,f)vhelp(s) (4,AE)
  6. stolen(s,f)vhelp(s) (3,5,->E)
7. EX(stolen(X,f)vhelp(X) (6,EI)


6.1 Predicate Logic
1. AX(p(X)->m(X)vn(X))
2. AX(m(X)->EYq(X,Y))
3. AX(n(X)->EYq(x,Y))
4. p(a)
  5. p(a)->m(a)vn(a) (1,AE)
  6. m(a)vn(a) (4,5,->E)
  7. m(a)->EYq(a,Y) (2,AE)
  8. n(a)->EYq(a,Y) (2,AE)
9. EYq(a,Y) (6,7,8,Proof By Cases)