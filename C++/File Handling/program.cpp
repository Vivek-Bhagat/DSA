#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream fout; // creating the class object
    string line;   // creating the string that reads the line
    fout.open("sample.txt");

    // Executing the loop if file successfully opened
    while (fout)
    {
        getline(cin, line); // standard reading of the line
        if (line == "-1")
            break;
        fout << line << endl;
    }
    fout.close(); // to close the file

    ifstream fin; // creating the obect that reads the file
    fin.open("sample.txt");

    //  Executin the loop utinl the end of the file
    while (getline(fin, line))
    {
        cout << line << endl;
    }
    fin.close();

    return 0;
}