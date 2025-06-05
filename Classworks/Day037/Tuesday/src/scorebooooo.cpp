#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> scores;

    int mark;

    cout << "Enter scores :" << endl;
    while (cin >> mark && mark != -1) {
        scores.push_back(mark);
    }

  
    sort(scores.begin(), scores.end(), greater<int>());

   
    scores.erase(unique(scores.begin(), scores.end()), scores.end());

    
    cout << "\nSorted scores (descending, no duplicates): ";
    for (int score : scores) {
        cout << score << " ";
    }
    cout << endl;

    
    cout << "Top 3 scores: ";
    for (size_t i = 0; i < min(size_t(3), scores.size()); ++i) {
        cout << scores[i] << " ";
    }
    cout << endl;

    return 0;
}
