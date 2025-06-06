#include<iostream>
#include<map>
using namespace std;

int main() {
	map<int, string>m;

	

	m.insert({ 1,"Ebi" });
	m.insert({ 2,"eb" });
	m.insert({ 4,"ap" });
	m.insert({ 3,"e" });

	m.insert({ 4,"er" });

	m.at(4) = "ee";

	//auto range = m.equal_range(4);

	for (auto x : m) {
		cout << x.first << " " << x.second << endl;
	}


}