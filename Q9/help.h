#ifndef help_H
#define help_H
#include<bits/stdc++.h>
#include "boys.h"
#include "girls.h"
using namespace std;
class help{
public:
    friend void scan(vector<boys> *b ,vector<girls> *g);
    friend void coupling(vector<boys> *b ,vector<girls> *g,vector< pair<string,string> > *couples);
    friend int maxxa(int a,int b,int c);
};
 void scan(vector<boys> *b ,vector<girls> *g);
 void coupling(vector<boys> *b ,vector<girls> *g,vector< pair<string,string> > *couples);
 int maxxa(int a,int b,int c);

 #endif




