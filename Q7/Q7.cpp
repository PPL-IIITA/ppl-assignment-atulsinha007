#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, string>  &c1, pair<string, string>  &c2) {return c1.first < c2.first;}

string bs( vector< pair<string, string> > vec, string x)
{
	int l = 0; 
	int h = vec.size();
	while(l <= h) {
		int mid = (l+h)/2;
		if((vec[mid]).first == x) {
			return vec[mid].second;
		}
		else if((vec[mid]).first < x) {
			l = mid +1;
		}
		else h = mid -1;
	}
	return "x";
}

void func1(	vector <string> lob )
{
	std::ifstream ifs1;
	ifs1.open("couples.txt", std::ios::in);
	vector< pair<string, string> > vec;
	string b, g;
	int l = lob.size(), i;
	while(ifs1 >> b >> g ) {
		vec.push_back(make_pair(b,g));
	}
	vector< pair<string, string> > :: iterator it;
	cout << "Using func 1\n";
	for( i = 0; i < l; i++ ) {

		for( it = vec.begin(); it!= vec.end(); it++ ) {
			if(it->first == lob[i]) {
				cout << lob[i] << " " << it->second<< endl;
			}
		}
	}

}
void func2(	vector <string> lob )
{
	std::ifstream ifs1;
	ifs1.open("couples.txt", std::ios::in);
	vector< pair<string, string> > vec;
	string b, g;
	int l = lob.size(), i;
	while(ifs1 >> b >> g ) {
		vec.push_back(make_pair(b,g));
	}
	vector < pair<string, string> > :: iterator it;
	vector <string> boys;
	cout << "Using func 2\n";

	for( it = vec.begin();it!= vec.end(); it++ ) {
		boys.push_back(it->first);		
	}	//vector< pair<string, string> > :: iterator it;
	sort(vec.begin(), vec.end(),cmp);
	for( i = 0; i < l; i++ ) {
		string gn = bs(vec, lob[i]);
		if( gn == "x") continue;
		cout << lob[i] << " " << gn << endl;
	}

}
void func3(	vector <string> lob )
{
	std::ifstream ifs1;
	ifs1.open("couples.txt", std::ios::in);
	vector< pair<string, string> > vec;
	string b, g;
	int l = lob.size(), i;
	while(ifs1 >> b >> g ) {
		vec.push_back(make_pair(b,g));
	}
	cout << "Using func 3\n";
	vector < pair<string, string> > :: iterator it;
	std::map<string, string> hash;
	for( it = vec.begin(); it != vec.end(); it++ ) {
		hash[it->first] = it->second;
	}


	// for( it = vec.begin();it!= vec.end(); it++ ) {
	// 	boys.push_back(it->first);		
	// }	//vector< pair<string, string> > :: iterator it;
	// sort(vec.begin(), vec.end(),cmp);
	for( i = 0; i < l; i++ ) {
		if(hash.find(lob[i]) != hash.end()) 
			cout << lob[i] << " " << hash[lob[i]] << endl;
	}

}

int main(int argc, char const *argv[])
{
	vector<string> listofboys;

	vector <string> :: iterator it;
	listofboys.push_back("b1");
	listofboys.push_back("b2");
	listofboys.push_back("b3");
	listofboys.push_back("b4");
	listofboys.push_back("b5");
	listofboys.push_back("b6");
	listofboys.push_back("b7");
	listofboys.push_back("b8");
	listofboys.push_back("b9");
	listofboys.push_back("b10");
	
	cout << "Checking for boys b1 to b10\n";
	cout << "\nRe run for different results\n\n";
	srand (time(NULL));
	int r = rand() % 3 + 1;

	if(r == 1) {
		func1(listofboys);
	}
	else if(r == 2) {
		func2(listofboys);
	}
	else {
		func3(listofboys);
	}
	return 0;
}

