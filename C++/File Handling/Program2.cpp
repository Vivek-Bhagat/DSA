//! Q.1 >> Write a single handling program in c++ to reading and the writing data on the file .

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int roll, fee;
    char name[50];

    cout << "Enter your Roll number:";
    cin >> roll;
    cout << "Enter your Name:";
    cin >> name;
    cout << "Enter your total fee in digit:";
    cin >> fee;

    ofstream fout("student.txt");
    fout << roll << "\t" << name << "\t" << fee;
    fout.close();

    ifstream fin("student.doc");
    fin >> roll >> name >> fee;
    fin.close();

    cout << "\n"
         << "\t" << roll << "\t" << name << "\t" << fee;
    return 0;
}