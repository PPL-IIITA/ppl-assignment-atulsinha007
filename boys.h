#ifndef boys_H
#define boys_H
#include <bits/stdc++.h>
using namespace std;
//*Header for boys.
class boys {//*Class for boys.

private:
 string name;
 int attractiveness;
 int intelligence;
 int budget;
 int status;
 int att_req;
 int type;


public:
    boys(string name,int att,int inte , int bud ,int req, int type);
    string get_name();
    int get_attractiveness();
    int get_intelligence();
    int get_budget();
    int get_status();
    int get_att_req();
    int get_type();
    void set_type(int type);
    void set_status(int stat);
};
#endif
