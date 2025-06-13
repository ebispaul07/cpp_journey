#include<iostream>
#include<fstream>
#include<string>
#include"customer.h"


using namespace std;

void Customer::processingCdr() {

	ifstream infile("cdr.txt");
	string line;


	if (infile.is_open()) {

		getline(infile, line);

			size_t lpos = line.find("|");
			size_t opos = line.find("o");

			string msisdn = line.substr(0, lpos);
			string nn = line.substr(lpos + 1, 3);
			string cusNo = line.substr(12, 5);
			string dur = line.substr(25, 1);
			string dow = line.substr(27, 1);
			string upl = line.substr(29,1);
			string incomCall = line.substr(31, 7);
			string gprsData = line.substr(39, 5);


			int Msisdn = stoi(msisdn);
			int Cusno = stoi(cusNo);
			int Dur = stoi(dur);
			int Dow = stoi(dow);
			int Upl = stoi(upl);
			int Inco = stoi(incomCall);
			int Gprs = stoi(gprsData);
			
			ofstream ofile("customer.txt");

			

			if (Cusno==42502) {

				if (ofile.is_open()) {
					ofile << "\tCustomer DataBase" << endl;
					ofile << "\t* Services within the mobile operator *" << endl;
					ofile << "\tIncoming voice call durations: " << Dur << endl;
					ofile << "\tOutgoing voice call durations: " << Dur << endl;
					ofile << "\tIncoming SMS messages: " << Dur << endl;
					ofile << "\tOutgoing SMS messages: " << Dur << endl;

					ofile << "\t* Services outside the mobile operator *" << endl;
					ofile << "\tIncoming voice call durations: " << Dur << endl;
					ofile << "\tOutgoing voice call durations: " << Dur << endl;
					ofile << "\tIncoming SMS messages: " << Dur << endl;
					ofile << "\tOutgoing SMS messages: " << Dur << endl;
					ofile << "\t* Internet use *" << endl;
					ofile << "\tMB downloaded: " << Dow << " | MB uploaded : " << Upl << endl;
					ofile << endl;
					ofile << endl;
					ofile.close();
				}
				else {
					cout << "\t\t\tFile is Already opened!!!" << endl;
				}
			}
			else {
				cout << "\t\t\tIncorrect customer Number!!" << endl;
			}

			if (Cusno == 42502) {
				ofstream opfile("operator.txt");

				if (opfile.is_open()) {
					opfile << "Operator Brand: JIO (" << Cusno << ")" << endl;
					opfile << "Incoming voice call durations: " << Inco << endl;
					opfile << "Outgoing voice call durations: " << Gprs << endl;
					opfile << "Incoming SMS messages: " << Dur << endl;
					opfile << "Outgoing SMS messages:" << Dur << endl;
					opfile << "MB downloaded: " << Inco << " | MB uploaded : " << Inco << endl;
					opfile << endl;
					opfile << endl;
					opfile.close();

				}
				else {
					cout << "\t\t\tFile is already Open" << endl;
				}

			}
			else {
				cout << "\t\t\tIncorrect Customer Number" << endl;
			}
	}
	

}

void Customer::processPartener() {
	ifstream infile("cdr.txt");
	string line;


	if (infile.is_open()) {

		while (getline(infile, line)) {

			size_t lpos = line.find("|");
			size_t opos = line.find("o");

			string msisdn = line.substr(0, lpos);
			string nn = line.substr(lpos + 1, 7);
			string cusNo = line.substr(17, 5);
			string sms = line.substr(24, 6);
			string dur = line.substr(32, 1);
			string dow = line.substr(35, 1);
			string upl = line.substr(38, 1);
			string incomCall = line.substr(35, 7);
			string gprsData = line.substr(42, 5);


			int Msisdn = stoi(msisdn);
			int Cusno = stoi(cusNo);
			int Dur = stoi(dur);
			int Dow = stoi(dow);
			int Upl = stoi(upl);
			int Inco = stoi(incomCall);
			int Gprs = stoi(gprsData);

			ofstream ofile("customer.txt");



			if (Cusno == 42501) {

				if (ofile.is_open()) {
					ofile << "\tCustomer DataBase" << endl;
					ofile << "\t* Services within the mobile operator *" << endl;
					ofile << "\tIncoming voice call durations: " << Dur << endl;
					ofile << "\tOutgoing voice call durations: " << Dur << endl;
					ofile << "\tIncoming SMS messages: " << Dur << endl;
					ofile << "\tOutgoing SMS messages: " << Dur << endl;

					ofile << "\t* Services outside the mobile operator *" << endl;
					ofile << "\tIncoming voice call durations: " << Dur << endl;
					ofile << "\tOutgoing voice call durations: " << Dur << endl;
					ofile << "\tIncoming SMS messages: " << Dur << endl;
					ofile << "\tOutgoing SMS messages: " << Dur << endl;
					ofile << "\t* Internet use *" << endl;
					ofile << "\tMB downloaded: " << Dow << " | MB uploaded : " << Upl << endl;
					ofile.close();
				}
				else {
					cout << "\t\t\tFile is Already opened!!!" << endl;
				}
			}
			else {
				cout << "\t\t\tIncorrect customer Number!!" << endl;
			}
		}
	}
}
