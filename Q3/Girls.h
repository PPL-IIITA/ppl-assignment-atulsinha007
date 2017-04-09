#include <bits/stdc++.h>
using namespace std;


class Girls {
private:
	string girl_name;
	int maintainence;
	int intelligence;
	int attractiveness;
	int preference
	double happiness;
	int status;

public:
	Girls(string girl_name, int attractiveness, int intelligence, int maintainence, int preference);
	string get_boy_name();
	int get_attractiveness();
	double get_happiness();
    int get_intelligence();
    int get_maintainence();
    int get_preference();
    int get_status();
    void set_status(int status);
}
