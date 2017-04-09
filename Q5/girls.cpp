#include "girls.h"
#include<bits/stdc++.h>
girls::girls(string nam,int att,int inte , int maina,int pref, int typ ){
    name = nam;
    attractiveness = att;
    intelligence = inte;
    preference = pref;
    maintenance = maina;
    status = 0;
    type = typ;
}
string girls::get_name(){
    return name;
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
void girls::set_type(int typ){
    type = typ;
}
int girls::get_type() {
    return type;
}



