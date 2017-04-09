#ifndef gift_H
#define gift_H
#include <bits/stdc++.h>

using namespace std;

class gift{
	
private:
 int type;
 int price;
 int value;
 
public:
 gift(int type, int price, int value);
 int get_price();
 int get_value();
 int get_type();

};
int sum(int jo);
int sum2(int jo);

#endif
