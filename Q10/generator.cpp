#include <bits/stdc++.h>
using namespace std;
int main()
{
	std::ofstream ofs1;
	srand(time(NULL));
	//* Inserting into Boys data.
	ofs1.open("boys.txt", std::ios::trunc);
	int i;
	int num;

	for(i = 1; i < 50; i++) {
        stringstream convert;
        num = i;
        convert << num;
        string s = convert.str();
		string str = string("boy") + to_string(i);
		int attr = rand() % 101 + 1;
		int intel = rand() % 101 + 1;
		int bud = rand() % 900 + 100;
		int attr_req = rand() % 101 + 1;
		int type = rand() % 3 + 1;
		ofs1 << str << " " << attr << " " << intel << " " << bud << " " << attr_req << " " << type << "\n";
	}
	{

		string str = string("boy") + to_string(i);
		int attr = rand() % 101 + 1;
		int intel = rand() % 101 + 1;
		int budget = rand() % 900 + 100;
		int attr_req = rand() % 101 + 1;
		int type = rand() % 3 + 1;
		ofs1 << str << " " << attr << " " << intel << " " << budget << " " << attr_req << " " << type;
	}
	ofs1.close();
	//* Inserting into girl data.
	ofs1.open("girls.txt", ios::trunc);
	for(i = 1; i < 25; i++)
	{
		string str = string("girl") + to_string(i);
		int attr = rand() % 101 + 1;
		int intel = rand() % 101 + 1;
		int budget = rand() % 900 + 100;
		int type = rand() % 3 + 1;
		int preference = rand() % 3 + 1;
		ofs1 << str << " " << attr << " " << intel << " " << budget << " " << type << " " << preference <<"\n";
	}
	{
		string s = string("girl") + to_string(i);
		int attr = rand() % 101 + 1;
		int intel = rand() % 101 + 1;
		int budget = rand() % 900 + 100;
		int type = rand() % 3 + 1;
		int preference = rand() % 3 + 1;
		ofs1 << s << " " << attr << " " << intel << " " << budget << " " << type << " " << preference ;
	}
	ofs1.close();
	return 0;
}
