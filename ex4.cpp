#include <iostream>
#include <vector>
using namespace std;

double medianScore(const vector<int>& numbers) {
    double sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return sum / numbers.size();
}

int medianOfPerson(const string& name, const vector<int>& scores) {
    double median = medianScore(scores);
    cout << "Median score of " << name << " is: " << median << endl;
    return 0;
}

int main() {
    int countPersonAproved = 0;
    double countMedianGeneral = 0;

    for (int i = 0; i < 5; i++) {
        string name;
        vector<int> scores(3);
        cout << "Enter the name of person " << (i + 1) << ": ";
        cin >> name;
        cout << "Enter three scores for " << name << ": ";
        for (int j = 0; j < 3; j++) {
            cin >> scores[j];
        }
        double median = medianScore(scores);
        if (median >= 60) {
            countPersonAproved++;
        }
        countMedianGeneral += median;
        medianOfPerson(name, scores);
    }
    

    cout << "Total number of approved persons: " << countPersonAproved << endl;
    cout << "Total number of general medians: " << countMedianGeneral / 5 << endl;

    return 0;
}