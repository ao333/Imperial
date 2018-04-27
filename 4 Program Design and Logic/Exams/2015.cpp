/*
1a
X->Y=~XvY
[(P->Q)^(R->S)^(PvR)]->(QvS)
[(~PvQ)^(~RvS)^(PvR)]->(QvS)
~[(~PvQ)^(~RvS)^(PvR)]v(QvS)
[(P^~Q)v(R^~s)v~(PvR)]v(QvS)         De Morgan
(P^~Q)v(R^~S)v~(PvR)v(QvS)           Associative
(P^~Q)v(R^~S)v~(PvR)v Q v S          Commutative
(P^~Q)vQv(R^~S)vSv~(PvR)
[(QvP)^(Qv~Q)]v[(RvS)^(Sv~s)]^~(PvR) distributive
(QvP)v(rvs0v~(PvR)                   X*True=X
QvPvRvSv~(PvR)                       Associative
QvSv(PvR)v~(PvR)                     Xv~X/True/Tautology

2a
i) EX,Y[tubeline(X)^tubeline(Y)^~(X=Y)^~EA,B,C(tubeline(A)^tubeline(B)^tubeline(C)^~(A=B)^~(B=C)^~(A=C)]
   ^AS[onNet(S)->EX(tubeline(X)^servedBy(S,X)]
   ^ES[onNet(S)^EX(tubeline(X)^servedBy(S,X))^~EA,B(tubeline(A)^tubeline(B)^~(A=B)^servedBy(S,A)^servedBY(S,B))]

ii) AL[tubeline(L)->ES1,S2(onNet(S1)^onNet(S2)^~(S1=S2)^servedBy(S1,L)^servedBy(S2,L)]
    ^AX,Y,S[tubeline(X)^tubeline(Y)^~(X=Y)^posChange(X,Y,S)<->onNet(S)^servedBy(S,X)^servedBY(S,Y)]

iii) AP,L[tubeline(L)^travel(P,L)->EV(validTravelDoc(V,P)^possess(P,V)]

iv) AV,P(validTravelDoc(V,P)->freedomPass(V)^over65(P)^possess(P,V) v dayTicket(V) v seasonTicket(V)

b
1. AS1,S2,C1,C2[cost(S1,S2,C1)^cost(S2,S1,C2)->C1=C2]
2. AS1,S2,S,C1,C2[hub(S1)^~hub(S2)^cost(S1,S,C1)^cost(S2,S,C2)->C1>C2]
3. hub(a)
4. ~hub(b)
5. cost(b,a,10)
6. cost(a,b,c)                                  Assume
7. hub(a)^hub(b)^cost(a,b,c)^cost(b,a,10)->c>10 AE,2
8. hub(a)^hub(b)^cost(a,b,c)^cost(b,a,10)       ^I,3,4,5,6
9. c>10                                         ->E,7,8
10. cost(a,b,c)^cost(b,a,10)->c=10              AE,1
11. cost(a,b,c)^cost(b,a,10)                    ^I,5,6
12. c=10                                        ->E,10,11
13. c>10^c=10                                   Inconsistent,9,12

3 \2 Object Oriented Design & Programming\4.2S Security Guards

4
*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int budget = 850;
float baseScore = 100;

class Component {
private:
	string make;
public:
	int price;
	Component(string a, int b) : make(a), price(b) {}
	virtual float get_score() = 0;
	virtual int get_price() = 0;
};

class RAM :public Component {
private:
	int size;
public:
	RAM(string a, int b, int c) : Component(a, b), size(c) {}
	float get_score() { return size * 8 + price * 0.1; }
	int get_price() { return price; }
};

class IO :public Component {
private:
	float responseTime;
public:
	IO(string a, int b, float c) : Component(a, b), responseTime(c) {}
	float get_score() { return price * 0.2 + (50 / responseTime); }
	int get_price() { return price; }
};

class Laptop {
private:
	int baseCost;
public:
	vector<Component*> comp;
	Laptop(int a, vector<Component*> b) : baseCost(a), comp(b) {}
};

class Employee {
private:
	string name;
	Laptop* laptop;
public:
	Employee(string a) : name(a) {}
	bool order_laptop(int base_cost, vector<Component*> c) {
		int totalCost = base_cost;
		for (int i = 0; i < c.size(); i++) {
			totalCost += c[i]->get_price();
		}
		if (totalCost > budget) return false;
		
		laptop = new Laptop(totalCost, c);
		for (int i = 0; i < c.size(); i++) {
			laptop->comp.push_back(c[i]);
		}
	}
	int get_score() {
		float score = baseScore;
		for (int i = 0; i < 4; i++) { //size not working
			score += laptop->comp[i]->get_score();
			 //cout << score << endl;
		}
		return score;
	}
};

int main() {
	Employee Andrew("Andrew");
	vector<Component*> order;
	order.push_back(new RAM("crucial", 90, 8));
	order.push_back(new RAM("crucial", 90, 8));
	order.push_back(new IO("samsung", 150, 5.5));
	Andrew.order_laptop(500, order);
	cout << Andrew.get_score() << endl;

	order.push_back(new RAM("corsair", 50, 4)); //need to implement addComponent
	Andrew.order_laptop(500, order);
	cout << Andrew.get_score() << endl;
}