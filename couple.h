#include<bits/stdc++.h>//*Header for couple.
#include "gift.h"
using namespace std;
class couple{//*Class couple.
private:
 string boy_name;
 string girl_name;
 int type_b;
 int type_g;
 int budget;
 int maintenance;
 int intel_b;
 int intel_g;
 int att_b;
 int att_g;
 int boy_happy;
 int girl_happy;
 int happiness;
 int compatibility;
public:
    couple(string bname,string gname, int typeg, int main, int attg, int intelg, int typeb, int bud, int attb, int intelb);
    string get_boy_name();
    string get_girl_name();
    int get_type_b();
    int get_type_g();
    int get_budget();
    int get_maintenance();
    int get_intel_b();
    int get_intel_g();
    int get_att_b();
    int get_att_g();
    void set_happiness(int x);
    void set_compatibility(int x);
    int get_compatibility();
    int get_happiness();
    int get_boy_happy();
    int get_girl_happy();
    void set_boy_happy(int x);
    void set_girl_happy(int x);
};

