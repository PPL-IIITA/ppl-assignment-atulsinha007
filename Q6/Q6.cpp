#include <bits/stdc++.h>
#include "gift.h"
using namespace std;
int main()
{
    int jo, zz;
    cout << "10 couples are in consideration " <<endl;
    jo = 10;
    cout << "Assume no of break ups = 3\n";
    zz = 3;
    vector <gift> k;
    freopen( "gifts.txt" , "r" ,stdin);
	while(1)
	{
		int type;
		int value;
		int price;
		cin >> type >> price >> value ;
		if(type == -1)break;
		gift giobj1(type, price, value);
		k.push_back(giobj1);
	}
	
	int s = sum(jo, zz);
    return 0;
}
