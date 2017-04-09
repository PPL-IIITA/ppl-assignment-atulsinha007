#include <bits/stdc++.h>
#include "boys.h"
#include "girls.h"
#include "couple.h"
#include "help.h"
#include "gift.h"
using namespace std;
bool cmp(pair<int,int> &c1, pair<int,int> &c2) {return c1.second > c2.second;}

int main()
{
    vector<boys> b;
    vector<girls> g;
    scan(&b,&g);
    int k;
    srand (time(NULL));
    k = 3+ rand()%10;
    vector< pair<string,string> > couples;
    b.erase(b.begin()+k, b.end());
    g.erase(g.begin()+k, g.end());
    coupling(&b,&g,&couples);

    srand (time(NULL));
    int x = rand() % 10 + 1;
    cout << "Random-------------\n";
    cout << "BOY " << b[x].get_name() << endl;
    cout << "GIRL " << g[x].get_name() << endl;

    std::ifstream ifs1;
	ifs1.open("gifts.txt", std::ios::in);

	vector< pair<int, int> > ar;
	int a, d, c;
	while(1) {
		ifs1 >> a >> d >> c;
		if (a == -1) break;
		ar.push_back(make_pair(d,c));	
	}
	ifs1.close();
	sort(ar.begin(), ar.end(),cmp);
	cout <<"GIFT " << ar[k].second << endl;
    //int z = sum(k);

    return 0;
}