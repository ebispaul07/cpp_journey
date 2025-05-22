#include<iostream>
#include<string>
#include"movie3.h"

using namespace std;


void Movie::setTitle(string t) {
    title = t;
}
string Movie::getTitle() {
    return title;
}

void Movie::setGenere(string g) {
    genere = g;
}
string Movie::getGenere() {
    return genere;
}

void Movie::setRating(int r) {
    rating = r;
}
int Movie::getRating() {
    return rating;
}

void Movie::result() {
    cout << "Enter Movie Name: ";
    cin >> title;

    cout << "Enter Genere: ";
    cin >> genere;

    cout << "Enter your Rating: ";
    cin >> rating;
    cout << endl;

    cout << "Title: " << title << endl;
    cout << "Genere: " << genere << endl;
    cout << "Rating: " << rating << endl;



    if (rating <= 6 && rating > 0) {
        cout << "flop" << endl;
    }
    else if (rating <= 8 && rating >= 7) {
        cout << "Average" << endl;
    }
    else if (rating <= 10 && rating > 11) {
        cout << "Hit" << endl;
    }
    else {
        cout << "Enter Valid rating!!!" << endl;
    }

}