#include<iostream>
using namespace std;
#define MAX 100

typedef struct quiz {
	int count = 0;
	int wrong = 0;
	char ch;
	int num;
}QZ;


void start(QZ q);
void about();
void menu(QZ q);
int exit();

void menu(QZ q) {
	q.num;
	cout << "Press," << endl;
	cout << "1.Start Quiz" << endl;
	cout << "2.About Quiz App" << endl;
	cout << "3.Menu" << endl;
	cout << "4.Exit" << endl;
	cin >> q.num;
	cout << endl;
	switch (q.num) {
	case 1:
		cout << "Starting Quiz!!! " << endl;
		cout << "*****************************" << endl;
		cout << endl;
		start(q);
		cout << endl;
		menu(q);
		break;
	case 2:
		cout << "About:" << endl;
		about();
		cout << endl;
		menu(q);
		break;
	case 3:
		cout << "Menu:" << endl;
		menu(q);
		break;
	case 4:
		cout << "\t\t\tTaTa Bye Bye" << endl;
		exit();
		break;
	default:
		cout << "\t\t\t\Are You Blind Enter Correct option" << endl;
		cout << endl;
		cout << endl;
		menu(q);
		break;
	}


}


int main() {
	QZ q;
	cout << "\t\t\tWelcome To Equiz!!!" << endl;
	cout << "\t\t**************************************" << endl;
	menu(q);

}

void start(QZ q) {
	cout << "1.Who is the Father of computer ?" << endl;
	cout << endl;
	q.ch;
	cout << "Options:" << endl;
	cout << "a).shaji \t\tb.)charles babage" << endl;
	cout << "c.)Narendra Modi\t\td.)Manmohan sing" << endl;
	cout << endl;
	cout << "Option:(a/b/c/d) ";
	cin >> q.ch;
	switch (q.ch) {
	case 'b':
		q.count++;
		break;
	default:
		q.wrong++;
	}
	cout << endl;
	cout << "2.Who is the Current President of Malapuram ?" << endl;
	cout << endl;

	cout << "Options:" << endl;
	cout << "a).shaji \t\tb.)M.K. Rafeekha" << endl;
	cout << "c.)P.P Sashi\t\td.)Sulaiman P" << endl;
	cout << endl;
	cout << "Option:(a/b/c/d) ";
	cin >> q.ch;
	switch (q.ch) {
	case 'b':
		q.count++;
		break;
	default:
		q.wrong++;
	}
	cout << endl;
	cout << "3. What does the name Malappuram mean in Malayalam?" << endl;
	cout << endl;
	cout << "Options:" << endl;
	cout << "a).MountainTown \t\tb.)HillSpace" << endl;
	cout << "c.)HillTop\t\td.)Mundensheri" << endl;
	cout << endl;
	cout << "Option:(a/b/c/d)";
	cin >> q.ch;
	switch (q.ch) {
	case 'c':
		q.count++;
		break;
	default:
		q.wrong++;
	}
	cout << endl;

	cout << "4. Which river flows through Malappuram district?" << endl;
	cout << endl;
	cout << "Options:" << endl;
	cout << "a).Pamba \t\tb.) Bharathapuzha" << endl;
	cout << "c.)Periyar\t\td.)Chaliyar" << endl;
	cout << endl;
	cout << "Option:(a/b/c/d) ";
	cin >> q.ch;
	switch (q.ch) {
	case 'b':
		q.count++;
		break;
	default:
		q.wrong++;
	}
	cout << endl;

	cout << "5.Which is the largest town in Malappuram district?" << endl;
	cout << endl;
	cout << "Options:" << endl;
	cout << "a).Manjeri \t\tb.)Malappuram" << endl;
	cout << "c.)Tirur\t\td.) Perinthalmanna" << endl;
	cout << endl;
	cout << "Option:(a/b/c/d) ";
	cin >> q.ch;
	switch (q.ch) {
	case 'd':
		q.count++;
		break;
	default:
		q.wrong++;
	}
	cout << endl;

	cout << "6.What is the plant that every father in Malappuram plants when his son doesn't listen to him?" << endl;
	cout << endl;
	cout << "Options:" << endl;
	cout << "a).Banana plant \t\tb.)gowri" << endl;
	cout << "c.)Coconut tree\t\td.)Mango tree" << endl;
	cout << endl;
	cout << "Option:(a/b/c/d) ";
	cin >> q.ch;
	switch (q.ch) {
	case 'a':
		q.count++;
		break;
	default:
		q.wrong++;
	}
	cout << endl;

	cout << "7. What is Mom's Favourite ?" << endl;
	cout << endl;
	cout << "Options:" << endl;
	cout << "a).chappal \t\tb.)Spoon" << endl;
	cout << "c.)plate\t\td.)sweeping brush" << endl;
	cout << endl;
	cout << "Option:(a/b/c/d) ";
	cin >> q.ch;
	switch (q.ch) {
	case 'd':
		q.count++;
		break;
	default:
		q.wrong++;
	}
	cout << endl;

	cout << "8. What is fullform of UST?" << endl;
	cout << endl;
	cout << "Options:" << endl;
	cout << "a).US Technologies \t\tb.)United States Technologies" << endl;
	cout << "c.)Unni Than and Sons\t\td.)USe and Throw" << endl;
	cout << endl;
	cout << "Option:(a/b/c/d) ";
	cin >> q.ch;
	switch (q.ch) {
	case 'c':
		q.count++;
		break;
	default:
		q.wrong++;

	}
	cout << endl;

	cout << "9.Which fish is known for its ability to change gender?" << endl;
	cout << endl;
	cout << "Options:" << endl;
	cout << "a).Tuna  \t\tb.)Clone fish" << endl;
	cout << "c.)Piranah\t\td.)Star fish" << endl;
	cout << endl;
	cout << "Option:(a/b/c/d) ";
	cin >> q.ch;
	switch (q.ch) {
	case 'b':
		q.count++;
		break;
	default:
		q.wrong++;
	}
	cout << endl;

	cout << "10. Who Invented School?" << endl;
	cout << endl;
	cout << "Options:" << endl;
	cout << "a).Roman Regins \t\tb.)Louis Maan" << endl;
	cout << "c.)John Cena\t\td.)Horace Mann." << endl;
	cout << endl;
	cout << "Option:(a/b/c/d) ";
	cin >> q.ch;
	switch (q.ch) {
	case 'd':
		q.count++;
		break;
	default:
		q.wrong++;
	}
	cout << endl;



	cout << endl;
	cout << "Result:" << endl;
	cout << endl;
	cout << "Total: " << q.count << " Questions  Correct!!!\t" << q.wrong << " Questions Wrong!!!" << endl;
	cout << endl;

	cout << "***********************************************************************************" << endl;

}

void about() {

	cout << "\t\t\tAbout Equiz" << endl;
	cout << "\t\t*****************************************" << endl;
	cout << endl;
	cout << "\t\t\tDeveloped By: Mr.Ebi s Paul(B.E,12th,11th,10th,UKG,LKG.Pre-KG)" << endl;
	cout << endl;
	cout << "\t\t\tDeveloped Platform: VS CODE" << endl;
	cout << endl;
	cout << "\t\t\tLanguage used: C++" << endl;
	cout << endl;
	cout << "\t\t\tDeveloped Date: 18.05.2025" << endl;
	cout << endl;
	cout << "\t\t\tFor Any Quaries Contact: ebi.s.paul7@gmail.com" << endl;
	cout << endl;

}

int exit() {
	return 0;
}