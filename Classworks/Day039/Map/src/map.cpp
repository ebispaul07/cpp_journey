#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

class Emp {
public:
	Emp(int id, string name){
		this->id = id;
		this->name = name;
	}

	void display() {
		cout << "ID: " << id << " " << "Name: " << name << endl;
	}

private:
	int id;
	string name;

};

int main() {
	Emp e1(2,"ebi");
	Emp e2(3, "emi");
	Emp e3(3, "e");

	map<int, vector<Emp>>m;
	
	vector<Emp>v;

	v.push_back(e1);
	v.push_back(e2);
	v.push_back(e3);

	m[1] = v;


	for (auto x : v) {
		x.display();
	}
	
}