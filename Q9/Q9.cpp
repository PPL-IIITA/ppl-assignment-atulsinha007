#include <bits/stdc++.h>
#include "boys.h"
#include "girls.h"
#include "couple.h"
#include "help.h"
using namespace std;
int main()
{
    vector<boys> b;
    vector<girls> g;
    scan(&b,&g);
    int k = 5;
    k = rand()%10;
    vector< pair<string,string> > couples;
    b.erase(b.begin()+k, b.end());
    g.erase(g.begin()+k, g.end());
    coupling(&b,&g,&couples);
    //int z = sum(k);

    return 0;
}