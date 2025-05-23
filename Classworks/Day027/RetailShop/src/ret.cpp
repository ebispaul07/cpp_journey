#include<iostream>
using namespace std;
#define MAX 1000

class RetailShop {
private:
	int p_id;
	string p_name[MAX];
	int  p_price;
	string prod_size[MAX];

public:
	void setProductid(int);
	int getProductid();
	void setProductname(string);
	string getProductname();
	void setProductprice(int);
	int getProductprice();
	void setProductsize(string);
	string getProductsize();
	void addProduct();
	void editingProduct();
	void searchProduct();
	

};
	

	void RetailShop::setProductid(int d) {
		p_id = d;
	}
	int RetailShop::getProductid() {
		return p_id;
	}
	void RetailShop::setProductname(string n) {
		p_name[MAX] = n;
	}
	string RetailShop::getProductname() {
		return p_name[MAX];
	}
	void RetailShop::setProductprice(int p) {
		p_price = p;
	}
	int RetailShop::getProductprice() {
		return p_price;
	}

	void RetailShop::setProductsize(string s) {
		prod_size[MAX] = s;
	}
	string RetailShop::getProductsize() {
		return prod_size[MAX];
	}


	void RetailShop::addProduct() {
		p_name[MAX];
		for (int i = 0;i < 3;i++) {
			cout << "Enter Your Product: ";
			cin >> p_name[i];
		}

		prod_size[MAX];
		cout << "Added Products: ";
		for (int i = 0;i < 3;i++) {
			prod_size[i] = p_name[i];

			cout << prod_size[i] << " ";
		}
		cout << endl;
	}

	void RetailShop::editingProduct() {
		cout << "Enter Product Name to Edit:";
		for (int i = 0;i < 3;i++) {
			cin >> p_name[i];
		}

		for (int i = 0;i < 3;i++) {
			if (prod_size[i] == p_name[i]) {
				cout << "Edited successfully" << p_name << endl;
			}
			else {
				cout << "Product Not Found..." << endl;
			}
		}

	}

	void RetailShop::searchProduct() {
		cout << "Enter Product Name to Search: " << endl;

		for (int i = 0;i < 3;i++) {
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
	}



int main() {

	cout << "***********Welcome To E-Shop************" << endl;

	RetailShop r1;

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
		r1.addProduct();

		break;

	case 2:
		cout << "Editing Product......" << endl;
		r1.editingProduct();
		

		break;

	case 3:
		cout << "Searching Product....." << endl;
		r1.searchProduct();
		

		break;

	case 4:
		cout << "Exiting Menu...." << endl;
		
		break;
		}

	

	}




