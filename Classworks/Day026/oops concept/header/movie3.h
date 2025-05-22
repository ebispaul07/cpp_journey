//#pragma once
#ifndef __MOVIE__
#define __MOVIE__
#include<string>
using namespace std;

class Movie {
private:
    string title;
    string genere;
    int rating;

public:
    void setTitle(string);
    string getTitle();
    void setGenere(string);
    string getGenere();
    void setRating(int);
    int getRating();
    void result();

};

#endif // !__MOVIE__
