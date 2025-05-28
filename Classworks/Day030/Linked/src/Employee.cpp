#include<iostream>
using namespace std;


class Employee {
private:
	int id;
	string name;
	float salary;
	Employee* next;
public:
	Employee() {
		id = 0;
		name = "";
		salary = 0;
		next = nullptr;
	}
	Employee(int i,string n,float s)
	{
		id = i;
		name = n;
		salary = s;
		next = nullptr;
	}

	void setId(int i) {
		id = i;
	}
	int getId() {
		return id;
	}
	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
	void setSalary(float s) {
		salary = s;
	}
	int getSalary() {
		return salary;
	}

	void setNext(Employee* nn) {
		next = nn;
	}
	Employee* getNext() {
		return next;
	}


};


class Details {
private:
	Employee* head = nullptr;
public:
	Details() {
		head = nullptr;
	}

	int addId(int);
	string addName(string);
	float addSalary(float);
	int deleteId(int);
	string searchName(string);
	int updateSalary(int);
	void countEmployee();
	void display();
	

};

Employee* addNode(Employee* head, Employee* nn)
{
	if (head == NULL)
	{
		head = nn;
		return head;
	}
	nn->setNext(head);
	head = nn;
	return head;
}

int Details::addId(int i) {
	
	Employee* nn = new Employee;

	nn->setId(i);//setvalue

	if (head == nullptr)
	{
		head = nn;
		//temp = n;
	}
	else
	{
		Employee* temp = head;
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(nn);
		
		cout << "New Node Add with value:" << temp->getId() << nn->getId();
		
	}

	return 0;
}

string Details::addName(string s) {
	
	Employee* nn = new Employee;

	nn->setName(s);

	if (head == nullptr)
	{
		
		head = nn;
		
	}
	else
	{
		Employee* temp = head;
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(nn);
		
		cout << "New Node Add with value:" << temp->getName() << nn->getName();
		
	}

	return 0;
}

float Details::addSalary(float s) {
	

	Employee* nn = new Employee;

	nn->setSalary(s);

	if (head == nullptr)
	{
		
		head = nn;
		
	}

	else
	{
		Employee* temp = head;
		while (temp->getNext() != nullptr)
			temp = temp->getNext();
		temp->setNext(nn);
		
		cout << "New Node Add with value:" << temp->getSalary() << nn->getSalary();
		
	}

	return 0;
}

void Details::display()
{
	Employee* temp = head;
	while (head != nullptr) {
		cout << temp->getId() << endl;
		temp = temp->getNext();

	}
	cout << "Null" << endl;

}





int main() {
	Employee e1(1,"Ebi",300);

}