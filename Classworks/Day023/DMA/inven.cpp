#include<iostream>
using namespace std;
#define MAX 100

typedef struct product {
	int id[MAX];
	char name[MAX];
	int quantity[MAX];
	int price[MAX];
	int count = 0;
}PRD;

void add(PRD &p);
void update(PRD &p);
void search(PRD &p);
void delet(PRD &p);





void menu(PRD &p) {
	int num;
	cout << "Select," << endl;
	cout << "1.Add Product" << endl;
	cout << "2.Update Product" << endl;
	cout << "3.Search Product" << endl;
	cout << "4.Delete Product" << endl;
	cin >> num;
	switch (num) {
	case 1:
		cout << "Adding Product" << endl;
		 add(p);
		break;
	case 2:
		cout << "Update Product" << endl;
		 update(p);
		break;
	case 3:
		cout << "Search Product" << endl;
		 search(p);
		break;
	case 4:
		cout << "Delete Product" << endl;
		 delet(p);
		break;
	default:
		cout << "Invalid!!!" << endl;
		break;
	}
}






int main() {
	PRD p;
	
	for (int i = 0;i < 3;i++) {
		menu(p);
		add(p);
		update(p);
		search(p);
		delet(p);
	};
	

}

void add(PRD &p) {
	
	cout << "Enter Your ID: ";
	cin >> p.id[p.count];
	cout << "Enter Your Name:";
	cin.getline(p.name, MAX);
	cout << "Enter Your Product Quantity:";
	cin >> p.quantity[p.count];
	cout << "Enter Your Price:";
	cin >> p.price[p.count];

	p.count++;

	cout << "Item Added Successfully!!!" << endl;


}

void update(PRD& p) {

	int updateid;
	cout << "Enter ID To Update:";
	cin >> updateid;

	for (int i = 0;i < p.count;i++) {


		if (p.id[i] == updateid) {
			
			cout << "Enter new Name:";
			
			cin.getline(p.name, MAX);
			cout << "Enter new Price:";
			cin >> p.price[i];
			cout << "Enter new qantity:";
			cin >> p.quantity[i];

			p.count++;
			cout << "Updated Successfully!!!" << endl;

		}
	}

}

void search(PRD &p) {
	int searchid;
	cout << "Enter Your ID: ";
	cin >> searchid;

	for (int i = 0;i < p.count;i++) {
		if (p.id[i] == searchid) {
			cout << "ID:" << p.id[i];
			cout << "name:" << p.name[i];
			cout << "quantity:" << p.quantity[i];
			cout << "price:" << p.price[i];
			p.count++;

			cout << "Search Successfully!!!" << endl;

		}
	}
}

void delet(PRD &p) {

	int deletid;
	cout << "Enter Your ID:";
	cin >> deletid;

	for (int i = 0;i < p.count;i++) {
		if (p.id[i] == deletid) {
			cout << "DEleted!!"<<endl;
			p.count--;
		}
		
	}


}