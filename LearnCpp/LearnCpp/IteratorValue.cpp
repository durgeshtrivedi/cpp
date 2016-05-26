//
//  IteratorValue.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 19/05/16.
//  Copyright © 2016 durgesh. All rights reserved.
//

#include <stdio.h>

#include <string>
#include <vector>
#include <iostream>
#include  <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;
void myfunction(double value);
void fileFunction();
void inputoutFunction();

void fileInPutOutput();

void itratorFunction();
void BinaryFunction();
void seekFunction();
inline void eatline(){while (cin.get()!= '\n') continue;};
struct Planet
{
    char name[20];
    double population;
    double g;
};

int main302()
{
    
    int i = 0;
    
    int b = i++ +i++;
    
    cout << b << endl;
    //iteratorfunction();
    //inputoutFunction();
    
    //fileFunction();
    
    //fileInPutOutput();
    //BinaryFunction();
   // seekFunction();
    return 0;
}

void myfunction(double value)
{
    cout << value << endl;
}



const int STLEN =10;


void iteratorfunction()
{
    vector <double> :: iterator  pd;
    
    vector<double> pt = {10,20,30,40};
    
    pd = pt.begin();
    
    *pd = 25.3;
    
    double temp;
    cout <<"Enter the numbers :" << endl;
    while(cin>>temp && temp !=0)
        pt.push_back(temp);
    
    for (pd = pt.begin();pd != pt.end();pd++)
    {
        cout << *pd;
    }
    for_each(pt.begin(), pt.end(), myfunction); // itterate through all element no need iterator decleration
}

void inputoutFunction()
{
    //using namespace std::cout;
   // using namespace std::cout;
    char name[STLEN];
    char title[STLEN];
    
    cout << "Enter your name" <<endl;
    cin.get(name,STLEN);
    if(cin.peek() != '\n')
        cout << "Sorry we have enough room for " << name <<endl;
    eatline();
    
    cout << " Name: " << name
    << "\nTitle: " << title << endl;
    
    
}

// file input and output function

void fileFunction()
{
    using namespace std;
    string filename;
    
    cout << " Enter name for the new file";
    cin >> filename;
    
    ofstream fout(filename.c_str());
    
    fout << "For you eyes only !!";
    cout << "Enter you secrete number";
    
    float secreatno;
    cin >> secreatno;
    
    fout << "You secreate no is" << secreatno <<endl;

    fout.close();
    ifstream fin(filename.c_str());
    
    cout <<"Here is the content of the file " <<filename <<endl;
    
    char ch;
    while (fin.get(ch))
        cout << ch;
    
    cout <<"Done";
    
    fin.close();
    
}

// file open check

const char * file = "Gettext.txt";
void fileInPutOutput()
{
    char ch;
    ifstream fin;
    fin.open(file);
    
    if(fin.is_open())
    {
        cout << "here is the current content of the file " << file << endl;
        while(fin.get(ch))
            cout << ch;
        
        fin.close();
    }
    
    ofstream fout(file,ios::out | ios::app);
    
        if(!fout.is_open())
        {
            cerr <<"Can't open file " << file << "file for out put \n";
            exit(EXIT_FAILURE);
        }
    cout << "Enter guest names (enter a blank line to quit):\n";
    string name;
    
    while (getline(cin,name) && name.size() > 0)
    {
        fout << name << endl;
    }
    
    fout.close();
    
   // fin.clear();
    
    fin.open(file);
    
    if(fin.is_open())
    {
        cout << "Here is the content of the file :" << file << endl;
        while(fin.get(ch))
            cout << ch;
        fin.close();
    }
    
    cout << "Done !!!" << endl;
}


// Read and write file in Binary format

const char * fileName = "planet.dat";
void BinaryFunction()
{
    Planet p1;
    ifstream fin;
    fin.open(file,ios::out | ios::app | ios::binary);
    //NOTE: some systems don't accept the ios_base::binary mode
    
    if(fin.is_open())
    {
        cout << "Here are the current contents of the "
        << file << " file:\n";
        
        while (fin.read((char*) &p1,sizeof(p1)))
        {
            cout << setw(20) << p1.name << ": "
            << setprecision(0) << setw(12) << p1.population
            << setprecision(2) << setw(6) << p1.g << endl;
        }
        fin.close();
    }
    
    ofstream fout (file,ios_base::out | ios_base ::app | ios_base ::binary);
    
    //NOTE: some systems don't accept the ios::binary mode
    if (!fout.is_open())
    {
        cerr << "Can't open " << file << " file for output:\n";
        exit(EXIT_FAILURE);
    }
    
    
    cout << "Enter planet name (enter a blank line to quit):\n";
    cin.get(p1.name,20);
    while(p1.name[0]!= '\0')
    {
        eatline();
        cout << "Enter planetary population: ";
        cin >> p1.population;
        cout << "Enter planet's acceleration of gravity: ";
        cin >> p1.g;
        eatline();
        fout.write((char*) &p1,sizeof p1);
        cout << "Enter planet name (enter a blank line "
        "to quit):\n";
        cin.get(p1.name,20);
    }
    fout.close();
    fin.clear();
    fin.open(file,ios_base::in| ios_base :: binary );
    if(fin.is_open())
    {
        cout << "Here are the new contents of the "
        << file << " file:\n";
        while(fin.read((char*)&p1,sizeof(p1)))
        {
            cout << setw(20) << p1.name << ": "
            << setprecision(0) << setw(12) << p1.population
            << setprecision(2) << setw(6) << p1.g << endl;
        }
        fin.close();
    }
    cout << "Done.\n";
}





//Seek function read file form random or different positions
const char* filename = "planet.dat";
const int LIM = 20;
void seekFunction()
{
    Planet p1;
    cout<< fixed;
    
    fstream finout;
    
    finout.open(filename,ios_base::in | ios_base::out | ios_base::binary);
    
    int ct = 0;
    if(finout.is_open())
    {
        finout.seekg(0); // go to the begining
        cout << "Here are the current contents of the "
        << file << " file:\n";
        while(finout.read((char*) &p1,sizeof(p1)))
        {
            cout << ct++ << ": " << setw(LIM) << p1.name << ": "
            << setprecision(0) << setw(12) << p1.population
            << setprecision(2) << setw(6) << p1.g << endl;
        }
        if (finout.eof()) {
            finout.clear(); // clear eof flag
        }
        else
        {
            cerr << "Error in reading " << filename << ".\n";
            exit(EXIT_FAILURE);
        }
    }
    else{
        cerr << filename << " could not be opened -- bye.\n";
        exit(EXIT_FAILURE);
    }
    
    cout << "Enter the record number you wish to change: ";
    long rec;
    cin >> rec;
    eatline(); // get rid of newline
    
    if(rec > 0|| rec < ct)
    {
        cerr << "Invalid record number -- bye\n";
        exit(EXIT_FAILURE);
    }
    
    streampos place = rec * sizeof(p1);
    finout.seekg(place); // random access
    
    if(finout.fail())
    {
        cerr << "Error on attempted seek\n";
        exit(EXIT_FAILURE);
    }
    
    finout.read((char*) &p1,sizeof(p1));
    cout << "Your selection:\n";
    cout << rec << ": " << setw(LIM) << p1.name << ": "
    << setprecision(0) << setw(12) << p1.population
    << setprecision(2) << setw(6) << p1.g << endl;
    if (finout.eof())
        finout.clear(); // clear eof flag
    cout << "Enter planet name: ";
    cin.get(p1.name, LIM);
    eatline();
    cout << "Enter planetary population: ";
    cin >> p1.population;
    cout << "Enter planet's acceleration of gravity: ";
    cin >> p1.g;
    
    finout.seekp(place); //go back
    finout.write((char*) &p1,sizeof(p1)) <<flush;
    
    if (finout.fail())
    {
        cerr << "Error on attempted write\n";
        exit(EXIT_FAILURE);
    }
    
    
    // show revised file
    ct = 0;
    finout.seekg(0); // go to beginning of file
    cout << "Here are the new contents of the " << filename
    << " file:\n";
    while (finout.read((char *) &p1, sizeof p1))
    {
        cout << ct++ << ": " << setw(LIM) << p1.name << ": "
        << setprecision(0) << setw(12) << p1.population
        << setprecision(2) << setw(6) << p1.g << endl;
    }
    finout.close();
    cout << "Done.\n";
    
    int *crt = new int[4] {1,2,3,4};
    
    char r ={static_cast<char>(232343422)};
    
}