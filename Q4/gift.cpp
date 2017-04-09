#include <bits/stdc++.h>
#include "gift.h"
#include "couple.h"
using namespace std;
bool happy_cmp(couple &c1, couple &c2) {return c1.get_happiness() > c2.get_happiness();}
bool comp_cmp(couple &c1, couple &c2) {return c1.get_compatibility() < c2.get_compatibility();}
gift::gift( int t,int p,int v ){
    type = t;
    price = p;
    value = v;
}
int gift::get_type()
{
	return type;
}
int gift::get_price()
{
	return price;
}
int gift::get_value()
{
	return value;
}

int sum(int zzz, int zz) 
{
	int sum = 0;
	//freopen("gifts.txt", "r", stdin);
	std::ifstream ifs1;
	ifs1.open("gifts.txt", std::ios::in);
	vector< pair<int, int> > ar;
	int a, b, c;
	while(1) {
		ifs1 >> a >> b >> c;
		if (a == -1) break;
		ar.push_back(make_pair(b,c));	
	}
	ifs1.close();
	int n = ar.size();
	vector< pair<int,int> > :: iterator i,j;
	for( i = ar.begin(); i!= ar.end(); i++ ) {
		for( j = ar.begin(); j != ar.end() -1; j++) {
			if(j->first > (j+1)->first) {
				int s, t;
				s = j->first;
				t = j->second;
				j->first = (j+1)->first;
				j->second = (j+1)->second;
				(j+1)->first = s;
				(j+1)->second = t;
			}
		}
	}

	vector <couple> coup;
	std::ifstream ifs2;
	ifs2.open("couples-details.txt", std::ios::in);
	//freopen("couples-details.txt", "r", stdin);
	string boy_name;
	string girl_name;
	int type_b;
	int type_g;
	int budget;
	int maintenance; 
	int att_b;
	int att_g;
	int intel_b;
	int intel_g;
	int happiness;
	int compatibilty;
	int girl_happy = 0;
	int boy_happy = 0;
	while(1) {
		ifs2 >> boy_name >> girl_name >> type_g >> maintenance  >> att_g >> intel_g >> type_b >> budget >> att_b >> intel_b;
		if(boy_name == "***" ) break;
		
		couple cobj1(boy_name, girl_name, type_g, maintenance, att_g, intel_g, type_b, budget, att_b, intel_b);
		coup.push_back(cobj1);
	}
	ifs2.close();
	//cout << "check1" << endl;
	vector<couple> :: iterator ic2;
	std::ofstream ifs;
	ifs.open("log.txt", std::ios::out);
	//FILE* fp = freopen("log.txt", "w", stdout);
	//cout << "111"<<endl;
	for( ic2 = coup.begin(); ic2 != coup.end(); ic2++ ) {
	
		time_t now = time(0);
 		char* dt = ctime(&now);
 		
		int z = ic2 ->get_maintenance();
		ifs << dt << " " << ic2->get_boy_name() << " " << ic2->get_girl_name() << " Budget = " << z << " " ;
		int s1 = 0, s2 = 0; 
		//cout << "check2" << endl;
		for( i = ar.begin(); i != ar.end(); i++ ) {
		//cout << "check3" << endl;
			 if( z >= i->first) {
			 //cout << "check4" << endl;
			 	z = z - (i->first);
			 	s1 += (i->first);
			 	s2 += (i->second);
			 	
			 	ifs << " price of gift = " << i->first << "\t";
			 	 
			 }
		}
		long long int h1 = 0, h2 = 0;
		if(ic2-> get_type_g() == 1) {
			if(s1 == 0) h1 = 0;
			else h1 = log(s1);
			//cout << "1st";
		}
		else if(ic2-> get_type_g() == 2) {
			h1 = s1 + s2;
			//cout << "2nd";
		}
		else if(ic2-> get_type_g() == 3) {
			//cout << s1 << " ---";
			h1 = pow(2.71828, s1);
			//cout << "3rd";
		}
		ic2 -> set_girl_happy(h1);
		ifs<< "h1 " << h1 << "\t" ;
		if(ic2 -> get_type_b() == 1) {
			h2 = (ic2 -> get_budget() - s1);
		}
		else if (ic2 -> get_type_b() == 2) {
			h2 = h1;
		}
		else if(ic2 -> get_type_b() == 3) {
			//intelligence of girl
			h2 = ic2->get_intel_g();
		}
		ic2 -> set_boy_happy(h2);
		ifs << "h2 " << h2 << "\n" << endl;
		
		int xyz = abs((ic2-> get_att_b()) - (ic2 -> get_att_g())) + abs((ic2-> get_intel_b()) - (ic2 -> get_intel_g())) + abs((ic2-> get_budget()) - (ic2 -> get_maintenance()));
		//cout << "zyz " << xyz << endl;
		int xyz2 = h1+h2;
		ic2->set_compatibility(xyz);
		ic2->set_happiness(xyz2); 
		//cout << "222"<<endl;	
	}
	ifs.close();
	//comparator part
	/*sort(coup.begin(), coup.end(), happy_cmp);
	if(zzz > coup.size()) zzz = coup.size();
	cout << zzz << " most happiest couples\n";
	int cnt = 0;
	for( auto it = coup.begin(); cnt < zzz && it != coup.end(); it++ ) {
		cnt++;
		cout << it->get_boy_name() << " " << it->get_girl_name() << " " << it->get_happiness() << endl;	
	}*/
	int cnt = 0;
	////////////////////////////////////////////////////////////
	//vector<couple> :: iterator ibreak;
	sort(coup.begin(), coup.end(), happy_cmp);
	sort(coup.begin()+zz, coup.end(), comp_cmp);


    ////////////////////////////////////////////////////////////
	
	if(zzz > coup.size()) zzz = coup.size();
	cout << zzz << " after break up of " << zz << " couples, most happiest couples are\n";
	cnt = 0;
	for( auto it = coup.begin(); cnt < zzz && it != coup.end(); it++ ) {
		cnt++;
		cout << it->get_boy_name() << " " << it->get_girl_name() << " " << it->get_happiness() << endl;	
	}
	cout << zzz << " after break up of" << zz << " couples, most compatible couples are\n";
	sort(coup.begin(), coup.end(), comp_cmp);
	cnt = 0;
	for( auto it = coup.begin(); cnt < zzz && it != coup.end(); it++ ) {
		cnt++;
		cout << it->get_boy_name() << " " << it->get_girl_name() << " " << it->get_compatibility() << endl;	
	}
	
	return sum;
}
