#include <bits/stdc++.h>
#include "Boys.h"
using namespace std;

Boys::Boys(string nam,int att,int inte , int bud,int req){
    boy_name = nam;
    attractiveness = att;
    intelligence = inte;
    min_att_req = req;
    budget = bud;
    status = 0;
    happiness = 0;
}
string boys::get_name(){
    return boy_name;
}
int boys::get_attractiveness()
{
    return attractiveness;
}
int boys::get_intelligence(){
    return intelligence;
}
int boys::get_budget(){
    return budget;
}
int boys::get_status(){
    return status;
}
int boys::get_min_att_req(){
    return min_att_req;
}
void boys::set_status(int stat){
    status = stat;
}
double boys::get_happiness() {
	return happiness;
}


