#include<iostream>
using namespace std;
#define MAX 1000

class RetailShop {
private:
	int p_id;
	string p_name[MAX];
	int  p_price;


public:
	string prod[MAX];

	void setProductid(int i) {
		p_id = i;
	}
	int getProductid() {
		return p_id;
	}
	void setProductname(string n) {
		p_name[MAX] = n;
	}
	string getProductname() {
		return p_name[MAX];
	}
	void setProductprice(int p) {
		p_price = p;
	}
	int getProductprice() {
		return p_price;
	}

	void menu() {
		int num;
		cout << "select," << endl;
		cout << "1.Add Product" << endl;
		cout << "2.Edit product" << endl;
		cout << "3.Search product" << endl;
		cout << "4.Exit" << endl;
		cin >> num;

		switch (num) {
		case 1:
			cout << "Adding Product....." << endl;
			void addProduct() {
				p_name[MAX];
				for (int i = 0;i < 3;i++) {
					cout << "Enter Your Product: ";
					cin >> p_name[i];
				}

				prod[MAX];

				for (int i = 0;i < 3;i++) {
					prod[i] = p_name[i];

					cout << "Added Products: " prod[i] << " ";
				}

			}

				break;

		case 2:
			cout << "Editing Product......" << endl;

			void editingProduct() {
				cout << "Enter Product Name to Edit:";
				for (int i = 0;i < 3;i++) {
					cin >> p_name[i];
				}

				for (int i = 0;i < 3;i++) {
					if (prod[i] == p_name[i]) {
						cout << "Edited successfully" << p_name<<endl;
					}
					else {
						cout << "Product Not Found..." << endl;
					}
				}

			}
			
			break;

		case 3:
			cout << "Searching Product....." << endl;

			cout << "Enter Product Name to Search: " << endl;

			for(int i=0;i<3;i++){
				cin >> p_name[i];
			}

			string someProduct[MAX] = { "JimJam","Parle","cake" };

			for (int i = 0;i < 3;i++) {
				if (someProduct[i] == p_name[i]) {

					cout << "Product is here : " << p_name[i] << endl;

				}
				else {
					cout << "Product Not Available!!!" << endl;
				}
			}

			break;

		case 4:
			cout << "Exiting Menu...." << endl;
			void close() {
				exit 0;
				break;
			}

		default:
			cout << "Invalid Input...." << endl;
			
		}

		
	}


};

int main() {

	cout << "***********Welcome To E-Shop************" << endl;




}