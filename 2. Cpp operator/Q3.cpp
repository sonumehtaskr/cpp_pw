//There are 45 total pupils in the class, 25 of whom are boys. Write a program to find how many girls received grades "A" if 17 boys made up 80% of the students that received grades "A".

#include <iostream>
using namespace std;

int main() {
    int totalpupil=45, aboys=17;
    int agraded=totalpupil*0.8;
    int agirls=agraded-aboys;
    cout << "Number of A graded girls: " << agirls;
    return 0;

}
