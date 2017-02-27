#include <bits/stdc++.h>
#include "couple.h"
using namespace std;
//*Constructor and method declarations.
couple::couple(string bname,string gname, int typeg, int main, int attg, int intelg, int typeb, int bud, int attb, int intelb)
{
	boy_name = bname;
	girl_name = gname;
	type_g = typeg;
	maintenance = main;
	att_g = attg;
	intel_g = intelg;
	type_b = typeb;
	budget = bud;
	att_b = attb;
	intel_b = intelb;
	girl_happy = 0;
	boy_happy = 0;
	happiness = 0;
	compatibility = 0;
}
    string couple::get_boy_name()
    {
    	return boy_name;
    }
    string couple::get_girl_name()
    {
    	return girl_name;
    }
    int couple::get_type_b()
    {
    	return type_b;
    }
    int couple::get_type_g()
    {
    	return type_g;
    }
    int couple::get_budget()
    {
    	return budget;
    }
    int couple::get_maintenance()
    {
    	return maintenance;
    }
    int couple::get_boy_happy()
    {
    	return boy_happy;
    }
    int couple::get_girl_happy()
    {
    	return girl_happy;
    }
    int couple::get_att_g()
    {
    	return att_g;
    }
    int couple::get_att_b()
    {
    	return att_b;
    }
    int couple::get_intel_g()
    {
    	return intel_g;
    }
    int couple::get_intel_b()
    {
    	return intel_b;
    }
    void couple::set_boy_happy(int x)
    {
    	boy_happy = x;
    }
    void couple::set_girl_happy(int x)
    {
    	girl_happy = x;
    }
    void couple::set_compatibility(int x)
    {
    	compatibility = x;
    }
    void couple::set_happiness(int x)
    {
    	happiness = x;
    }
    int couple::get_happiness()
    {
	return happiness;
    }
    int couple::get_compatibility()
    {
    	return compatibility;
    }



