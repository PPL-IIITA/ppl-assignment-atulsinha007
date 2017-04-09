#include <bits/stdc++.h>
#include "gift.h"
using namespace std;
int main()
{
    int jo;
    cout << "ENTER K " <<endl;
    cin >> jo;
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
	
	int s = sum(jo);
    return 0;
}
