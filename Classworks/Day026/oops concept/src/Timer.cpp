#include<iostream>
using namespace std;
#define MAX 86400


class DigitalClock {
public:
	int hour= 0;
	int minute=0;
	int second=0;

	void tick() {
		for (int i = 0;i <MAX;i++) {
		
			if (second == 60) {
			 minute++ ;
				  second = 0;
			}
			else if (minute == 60) {
			 hour++ ;
				minute = 0;
			}
			else if (hour == 24) {
				second =0 ;
				

			}
			second ++;
			cout <<"Hour: " << hour<< endl;
			cout << "Minute: " << minute << endl;
			cout << "Second: " << second<< endl;
		}
		}

};

int main() {

	DigitalClock d1;
	
	d1.tick();


}