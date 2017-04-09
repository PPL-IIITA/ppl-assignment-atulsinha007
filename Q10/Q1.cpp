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
    vector< pair<string,string> > couples;
    coupling(&b,&g,&couples);
    return 0;
}
