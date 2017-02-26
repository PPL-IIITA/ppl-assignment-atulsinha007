#include "boys.h"
#include<bits/stdc++.h>
boys::boys(string nam,int att,int inte , int bud,int req, int typ ){
    name = nam;
    attractiveness = att;
    intelligence = inte;
    att_req = req;
    budget = bud;
    status = 0;
    type = typ;
}
string boys::get_name(){
    return name;
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
int boys::get_att_req(){
    return att_req;
}
void boys::set_status(int stat){
    status = stat;
}
void boys::set_type(int typ){
    type = typ;
}
int boys::get_type() {
    return type;
}




