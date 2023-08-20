// Example 4: Complete Program listing

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    ifstream inFile;
    ofstream outFile;
    double test1, test2, test3, test4, test5;
    double avg;
    string firstName;
    string lastName;

    inFile.open("test.txt");
    outFile.open("testavg.txt");

    outFile << fixed << showpoint; // output floating point number in a fixed decimal format.
    outFile << setprecision(2); // format the output of 2 decimal places 

    cout <<"Processing data" <<endl;

    inFile >> firstName >> lastName;
    outFile << "Student name: "<< firstName<< "" << lastName << endl;
    inFile >> test1 >> test2 >> test3 >> test4 >> test5;

    outFile <<"Test Scores: " << setw(6) << test1 // the output show at position 6 column.
                              << setw(6) << test2
                              << setw(6) << test3
                              << setw(6) << test4 
                              << setw(6) << test5 << endl;


    avg = (test1 + test2 + test3 +test4 + test5)/5.0;

    outFile << "Avg test score: " << setw(6) << avg <<endl;

    inFile.close();
    outFile.close();

}

