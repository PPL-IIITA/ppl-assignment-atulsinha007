#ifndef girls_H
#define girls_H
#include <bits/stdc++.h>
using namespace std;
//*Header for girls.
class girls {//*Class for girls.

private:
 string name;
 int attractiveness;
 int intelligence;
 int maintenance;
 int preference;
 int status;
 int type;


public:
    girls(string name,int attractiveness,int intelligence , int maintenance ,int preference, int type);
    string get_name();
    int get_attractiveness();
    int get_intelligence();
    int get_maintenance();
    int get_status();
    int get_type();
    int get_preference();
    void set_type(int type);
    void set_status(int stat);
};

#endif
