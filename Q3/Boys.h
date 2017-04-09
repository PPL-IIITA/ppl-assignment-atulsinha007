#include <bits/stdc++.h>
using namespace std;


class Boys {
private:
	string boy_name;
	int budget;
	int intelligence;
	int attractiveness;
	int min_attr_req;
	double happiness;
	int status;

public:
	Boys(string boy_name, int attractiveness, int intelligence, int budget, int min_attr_req);
	string get_boy_name();
	int get_attractiveness();
	double get_happiness();
    int get_intelligence();
    int get_budget();
    int get_status();
    int get_min_att_req();
    void set_status(int status);
}
