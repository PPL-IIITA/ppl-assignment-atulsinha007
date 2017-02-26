#include "help2.h"
#include "gift.h"
#include <bits/stdc++.h>



using namespace std;

void scan2(vector<gift> *k )
{
    freopen( "gifts.txt" , "r" ,stdin);
	while(1)
	{
		int type;
		int value;
		int price;
		cin >> type >> price >> value ;
		if(type == -1)break;

		gift giobj1(type, price, value);
		(*k).push_back(giobj1);
	}

	
}

