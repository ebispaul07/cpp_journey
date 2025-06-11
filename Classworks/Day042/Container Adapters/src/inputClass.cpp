#include<iostream>
#include<vector>
#include<iterator>
#include<fstream>
#include<string>
using namespace std;


class Employee {
protected:
	int id;
	string name;
public:
	Employee() {};
	Employee(int id,string name) {
		this->id = id;
		this->name = name;
	}

	void wrfile() {

		
			cout << "Enter ID: ";
			istream_iterator<int>init(cin);
			istream_iterator<int>endit;


			cout << "Enter Name: ";
			istream_iterator<string>ini(cin);
			istream_iterator<string>endi;


			vector<int>num(init, endit);

			vector<string>nu(ini, endi);


			
			ofstream wrfile("f.txt");

			for (auto x : num) {
				wrfile << x << " ";
			}

			for (auto x : nu) {
				wrfile << x << endl;
			}

			wrfile.close();

		
	}
	


};


int main() {
	Employee e;
	e.wrfile();



}
