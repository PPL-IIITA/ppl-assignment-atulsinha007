#include<bits/stdc++.h>
#include "help.h"
using namespace std;
void scan(vector<boys> (*b) ,vector<girls> (*g)) //*Scanning boys and girls from txt file.
{
    freopen( "boys.txt" , "r" ,stdin);
	while(1)
	{
		string name;
		int attract;
		int intelli;
		int budget;
		int attr_req;
		int type;
		int status = 0;
		cin >> name >> attract  >> intelli  >> budget  >> attr_req  >> type ;
		if(name == "***")break;

		boys bobj1(name, attract, intelli, budget, attr_req, type);
		(*b).push_back(bobj1);
	}

	freopen( "girls.txt" , "r" ,stdin);
	while(1)
	{
		string name;
		int attract;
		int intelli;
		int maintenance;
		int type;
		int preference;
		int status = 0;
		cin >> name >> attract >>  intelli >> maintenance >> preference >> type ;
		if(name == "***")break;

		girls gobj1(name, attract, intelli, maintenance, preference, type);
        	(*g).push_back(gobj1);
   	 }
}

void coupling(vector<boys> (*b) ,vector<girls> (*g),vector< pair<string,string> > (*couples)) //*Forming couples.
{


        	vector <girls> :: iterator ig1;
        	for( ig1 = (*g).begin(); ig1 != (*g).end(); ig1++) {
                vector <boys> :: iterator ib1;
                for( ib1 = (*b).begin(); ib1 != (*b).end(); ib1++ ) {
                    if( ib1 -> get_budget() >= ig1->get_maintenance() && ib1 -> get_status() == 0 && ig1 -> get_status() == 0 && ib1 -> get_att_req() <= ig1 -> get_attractiveness()) {
                        (*couples).push_back(make_pair(ib1->get_name(), ig1->get_name()));
                        ib1 -> set_status(1);
                        ig1 -> set_status(1);
                    }
                }
            }
		vector< pair<string, string> > :: iterator ic;
		std::ofstream ifs1, ifs2;
		ifs2.open("couples-details.txt",std::ios::out);
		ifs1.open("couples.txt", std::ios::out);
		for( ic = (*couples).begin(); ic != (*couples).end(); ic++ ) {
			cout << ic -> first << " " << ic -> second << endl;
			ifs1 << ic -> first << " " << ic -> second << endl;
			ifs2 << ic -> first << " " << ic -> second << " ";
			vector <girls> :: iterator ig2;
			for( ig2 = (*g).begin(); ig2 != (*g).end(); ig2++ ) {
				if( ic -> second == ig2 -> get_name()) {
					ifs2 << ig2-> get_type() << " " << ig2 -> get_maintenance() << " " << ig2 -> get_attractiveness() << " " << ig2->get_intelligence() << " " ;
				}
			}
			vector <boys> :: iterator ib2;
			for( ib2 = (*b).begin(); ib2 != (*b).end(); ib2++ ) {
				if( ic -> first == ib2 -> get_name()) {
					ifs2 << ib2-> get_type() << " " << ib2 -> get_budget() << " " << ib2 -> get_attractiveness() << " " << ib2->get_intelligence() << endl;
					break;
				}
			}
		}

		

}

