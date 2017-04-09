#include<bits/stdc++.h>
#include "help.h"
#include "boys.h"
#include "girls.h"
using namespace std;


bool main_comp(girls &g1, girls &g2) {return g1.get_maintenance() < g2.get_maintenance();}
bool att_comp(boys &b1, boys &b2) {return b1.get_attractiveness() < b2.get_attractiveness();}

void scan(vector<boys> (*b) ,vector<girls> (*g))
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

void coupling(vector<boys> (*b) ,vector<girls> (*g),vector< pair<string,string> > (*couples))
{

        	
        	vector <girls> :: iterator ig1;
        	vector <boys> :: iterator ib2; 

        	sort((*g).begin(), (*g).end(), main_comp);
        	// for( ig1 = (*g).begin(); ig1 != (*g).end(); ig1++) {
        	// 	cout << ig1->get_name() << " -//- " << ig1->get_maintenance() << endl;
        	// }
        	sort((*b).begin(), (*b).end(), att_comp);

/*
        	for( ig1 = (*g).begin(); ig1 != (*g).end(); ig1++) { 
			vector <boys> :: iterator ib1;
			for( ib1 = (*b).begin(); ib1 != (*b).end(); ib1++ ) {
				if( ib1 -> get_budget() >= ig1->get_maintenance() && ib1 -> get_status() == 0 && ig1 -> get_status() == 0 && ib1 -> get_att_req() <= ig1 -> get_attractiveness()) {
					(*couples).push_back(make_pair(ib1->get_name(), ig1->get_name()));
					ib1 -> set_status(1);
					ig1 -> set_status(1);
				}
			}

*/			int oe = 0;
        	ig1 = (*g).begin();
        	ib2 = (*b).begin();
        	while(1) {
	        	if( oe % 2 == 0 ) {
	        		//cout << "Even\n";
					for( ; ig1 != (*g).end(); ig1++) { 
						vector <boys> :: iterator ib1;
						int ak0 = 0;
						for( ib1 = (*b).begin(); ib1 != (*b).end(); ib1++ ) {
							if( ib1 -> get_budget() >= ig1->get_maintenance() && ib1 -> get_status() == 0 && ig1 -> get_status() == 0 && ib1 -> get_att_req() <= ig1 -> get_attractiveness()) {
								(*couples).push_back(make_pair(ib1->get_name(), ig1->get_name()));
								ib1 -> set_status(1);
								ig1 -> set_status(1);
								ak0 = 1;
								break;
							}
						}
						if(ak0 == 1) break;
					}
				}
				else {
					//cout << "Odd\n";
					for( ; ib2 != (*b).end(); ib2++) { 
						vector <girls> :: iterator ig2;
						int ak1 = 0;
						for( ig2 = (*g).begin(); ig2 != (*g).end(); ig2++ ) {
							if( ib2 -> get_budget() >= ig2->get_maintenance() && ib2 -> get_status() == 0 && ig2 -> get_status() == 0 && ib2 -> get_att_req() <= ig2 -> get_attractiveness()) {
								(*couples).push_back(make_pair(ib2->get_name(), ig2->get_name()));
								ib2 -> set_status(1);
								ig2 -> set_status(1);
								ak1 = 1;
								break;
							}
						}
						if(ak1 == 1) break;
					}
					
				}

				oe++;
				//cout << oe << endl;
				if(ib2 == (*b).end()  || ig1 == (*g).end()) break;
		}
		cout << "Happiest k couples\n";
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
		ifs2 << "***"; 
        	
        
        
}


