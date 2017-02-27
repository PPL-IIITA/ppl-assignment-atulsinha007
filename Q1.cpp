#include <bits/stdc++.h>
#include "boys.h"
#include "girls.h"
#include "couple.h"
#include "help.h"
using namespace std;
int main() //This is main for question 1.
{
    vector<boys> b;
    vector<girls> g;
    scan(&b,&g);
    vector< pair<string,string> > couples;
    coupling(&b,&g,&couples); //* Function call to form couples.
    return 0;
}
