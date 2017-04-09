#include <bits/stdc++.h>
#include "Girls.h"
using namespace std;

Girls::Girls(string nam,int att,int inte , int maina,int pref){
    girl_name = nam;
    attractiveness = att;
    intelligence = inte;
    preference = pref;
    maintenance = maina;
    status = 0;
    happiness = 0;
}
string girls::get_name(){
    return girl_name;
}
int girls::get_attractiveness()
{
    return attractiveness;
}
int girls::get_intelligence(){
    return intelligence;
}
int girls::get_maintenance(){
    return maintenance;
}
int girls::get_status(){
    return status;
}
int girls::get_preference(){
    return preference;
}
void girls::set_status(int stat){
    status = stat;
}
double girls::get_preference() {
	return preference;
}