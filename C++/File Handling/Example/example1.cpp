#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    cout << "hello";
    fstream newFile;
    newFile.open("sample.txt", ios::out); // openend the file to perform the Write operation using the  file object
    if (newFile.is_open())
    {
        newFile << "The file is opened \n"; // inserting the text
        newFile.close();                    // closing the file
    }

    newFile.open("sample.txt", ios::in); // opened the fie to do the Read operation using the file object
    if (newFile.is_open())
    {
        string text;
        while (getline(newFile, text))
        {                         // checking the file is open or not
            cout << text << "\n"; // printing the data from the file
        }
        newFile.close(); // closing the file
    }
    return 0;
}