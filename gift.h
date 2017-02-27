#ifndef gift_H
#define gift_H
#include <bits/stdc++.h>//*Header for gifts.
using namespace std;

class gift{//*Gift class.

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

#endif
