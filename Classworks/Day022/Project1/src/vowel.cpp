#include<iostream>
using namespace std;
#define MAX 100



int cnt(char* ptr) {

	int count = 0;
	while (*ptr!= '\0') {

		switch (*ptr)
		{
		case 'a':
			
		case 'e':
			
		case 'i':
		
		case 'o':
		
		case 'u':
			count++;
			
		}
		ptr++;
	}

	return count;

}



int main() {

	char ch[MAX];
	cout << "Enter Any String:";
	cin.getline(ch,MAX);
	
	char vo[5] = { 'a','e','i','o','u'};
	

	cout <<cnt(ch);

	 return 0;

}