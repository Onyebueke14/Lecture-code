#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    string s1_name;
    string s2_name;
    double s1_t1;
    double s1_t2;
    double s1_t3;
    double s2_t1;
    double s2_t2;
    double s2_t3;
    double s1_avg;
    double s2_avg;

    ifstream inputFile;
    ofstream Outputfile;
    
    InputFile.Open("Students_Grades.txt");

    if(!InputFile)
    {
        cout << "Error: the path on files does not exsit" << endl;
        exit(1);
    }
    Inputfile >> s1_name;
    Inputfile >> s1_t1 >> s1_t2 >> s1_t3;

    Inputfile >> s2_name;
    Inputfile >> s2_t1 >> s2_t2 >> s2_t3;

    s1_avg = (s1_t1+s1_t2+s1_t3)/3;
    s2_avg = (s2_t1+s2_t2+s2_t3)/3;
    InputFile.Close();

    OutputFile.Open(Final_Grade.txt);
    OutputFile << s1_name << " Final grade: " << s1_avg << endl;
    OutputFile << s2_name << " Final grade: " << s2_avg << endl;

    OutputFile.close();


}