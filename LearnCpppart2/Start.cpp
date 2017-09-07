//
//  Start.cpp
//  LearnCpp
//
//  Created by Durgesh Trivedi on 24/04/17.
//  Copyright © 2017 durgesh. All rights reserved.
//


#include  "Mainheader.hpp"
#include "ComplexNumber.hpp"

static int option = 0;
int main() {

    cout << "My second revison for Cpp" << endl;
    int play;
    
    cout << "Enter the example number you want to run : ";
    cin >> play;
    switch (play) {
    case 1:
             cout << "This Example is for array in C++" << endl;
            arrayExample();
            break;
        case 2:
            cout << "This example is for string ";
            stringExample();
            break;
            
        case 3:
            cout << "This is examaple of structure " << endl;
            structExample();
            break;
        case 4:
            cout << "This is examaple of Pointers " << endl;
            pointerExample();
            break;
        case 5:
            cout << "This is examaple of String compare" << endl;
            stringCompareExample();
            break;
        case 6:
            cout << "This is file I/O example " << endl;
            fileIOExample();
            break;
        case 7:
            cout << "Array pointer example  " << endl;
            array_Pointer();
            break;
        case 8:
            cout << "Function Pointer example" << endl;
            functionPointer();
            break;
            
        case 9:
            cout << "Function Pointer example 2 "<< endl;
            functionPointerExample();
            break;
            
        case 10:
            cout << "Example of references :" << endl;
            passByReferenceExample();
            break;
        case 11:
            cout << "Example for function template" << endl ;
            functionTemplateExample();
            break;
            
        case 12:
            cout << "class Example " << endl;
            classExample();
            break;
        case 13:
            cout << "Operator overloading example " << endl;
            operatorOVerloadingExample();
            break;
        case 14:
            cout << "Exception in C++" << endl;
            exceptionHandleing();
            break;
        case 15 :
            cout << "Writng a text file" << endl;
            writingFile();
            break;
        case 16 :
            cout << "Read from a text file " << endl;
            readFile();
            break;
        case 17 :
            cout << "Parsing a txt file " << endl;
            parsingTextFile();
            break;
        case 18 :
            cout << "Padding in struct" << endl;
            structandPading();
            break;
        case 19 :
            cout << "Reading and writing in bin file" << endl;
            rwBinaryFile();
            break;
        case 20 :
            cout << "Vector template" << endl;
            vectorTemplate();
            break;
        case 21 :
            cout << "Maps" << endl;
            mapTemplate();
            break;
            
        case 22 :
            cout << "Set" << endl;
            setTemplate();
            break;

        case 23 :
            cout << "Stack and Queue" << endl;
            stackAndQueue();
            break;
        case 24 :
            cout << "DeQueue and Friend" << endl;
            dequeueAndFriend();
            break;
        case 25 :
            cout << "Assignment operator and Copy constructor" << endl;
            assigmentOperator();
            break;
        case 26 :
            cout << "Left shift Operator" << endl;
            leftShitOperator();
            break;
            
        default:
            
            if (option == 0) {
                cout << "The option you provide is wrong please reenter the correct option" << endl;
                option++;
                main();
            } else {
                cout << "There is only 2 attempt you are about to exit" <<endl;
                option = 0;
            }
    }
}


/// Array Example

void arrayExample() {
  
    int array[10];
    array[5] = 19;
    cout << "The value of array at index 5 is " << array[5] << endl;
    int myarray[]  = {1,2,3,4};
    cout << "The value myarray[0] " << myarray[0] << " myarray[1] " << myarray[1] << " myarray[2] " << myarray[2] << endl;
    
    cout << "Size of array myarray " << sizeof myarray << " Size of element myarray[0] " << sizeof myarray[0] << endl;
    
    float value[0] {} ;
    cout << "Empty array value :" <<value[0];
}

void stringExample() {
    const int ArraySz = 20;
    char str[] = "This is Durgesh ";
    char str1[] = {'A', 'B', 'C', '\0'};
    char mystr[15];
    cout << str << " and " << str1 << endl;
    cout << "Enter the string " << endl;
    cin >> mystr;
    cout << "You insterted string " << mystr << endl;
    cin.get();
    // USing ger
    char newstr[20];
    cout << "Enter the new string " << endl;
    cin.get(newstr,ArraySz).get();
    cout << "You insterted string " << newstr << endl;
    
    string str3 = "helloo";
    string str2 = str1;
    
    string str4;
    
    char char1[10] = "why";
    char char2[5] = "Word";
    strcpy(char1,char2);
    
    cout << "Value in " << char1 << endl;
    cout << "size of str3" << str3.size() << endl;
    
    cout << "Concanate string array char1 + char2 using strcat " << strcat(char1, char2) << endl;
    
    cout << R"( What is doing on "here" ! )"  << endl;
        
    cout << R"+*("(what the hell is going on  here) !!! ")+*" <<endl;
    
}

void stringCompareExample() {

    char word[10] = "?ate";
    
    for (int ch = 'a'; strcmp(word,"mate"); ch++) {
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
    
    endofFileExample();
}

void endofFileExample() {
    
    int ch;
    int count = 0;
    
    while ((ch = cin.get()) != EOF) {
        
        cout.put(char(ch));
        count++;
    }
    cout << endl << count << " characters read\n";
}

void classExample() {
    
    //using constructor to creat new object
    
    Stock1 stock("MY company", 10, 20.0);  // 1 syntax for the constructo
    
    Stock1 stocky = Stock1("Your company", 10, 20.0);
    
    Stock1 fluffy_the_cat;
    fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(15, 18.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(400, 20.00);
    fluffy_the_cat.show();
    fluffy_the_cat.buy(300000,40.125);
    fluffy_the_cat.show();
    fluffy_the_cat.sell(300000,0.125);
    fluffy_the_cat.show();
    
    const int SKT = 4;
    Stock1 stocks[SKT] = {
    Stock1("My company", 10, 10.0),
        Stock1("Your company", 10, 20.0),
        Stock1("our company", 10, 30.0),
        Stock1("WE company", 10, 40.0)
    };
    
    cout << "Stock holding " << endl;
    
    for (int i = 0; i< SKT; i++) {
        
        stocks[i].show();
    }
    
    const Stock1 *top = &stocks[0];
    
    for (int i = 0; i< SKT; i++) {
        top = &top->topal(stocks[i]);
        // now top points to the most valuable holding
        std::cout << "\nMost valuable holding:\n";
        top->show();
        
    }
}
 void operatorOVerloadingExample() {
     Times planning;
     Times coding(2, 40);
     Times fixing(5, 55);
     Times total;
     
     cout << "planning time = ";
     planning.Show();
     cout << endl;
     
     cout << "coding time = ";
     coding.Show();
     cout << endl;
     
     cout << "fixing time = ";
     fixing.Show();
     cout << endl;
     total = coding + fixing;
     
     // operator notation
     cout << "coding + fixing = ";
     total.Show();
     cout << endl;
     
     Times morefixing(3, 28);
     cout << "more fixing time = ";
     morefixing.Show();
     cout << endl;
     
     total = morefixing.operator+(total);

     // function notation
     cout << "morefixing.operator+(total) = ";
     total.Show();
     cout << endl;
     
     
     Times weeding(4, 35);
     Times waxing(2, 47);
     Times total1;
     Times diff;
     Times adjusted;
 
     
     cout << "weeding time = ";
     weeding.Show();
     cout << endl;
     cout << "waxing time = ";
     waxing.Show();
     cout << endl;
     
     cout << "total work time = ";
     total1 = weeding + waxing; // use operator+()
     total1.Show();
     cout << endl;
     
     diff = weeding - waxing; // use operator-()
     cout << "weeding time - waxing time = ";
     diff.Show();
     cout << endl;
     
     adjusted = total1 * 1.5; // use operator+()
     cout << "adjusted work time = ";
     adjusted.Show();
     cout << endl;
     
     
     Times aida(3, 35);
     Times tosca(2, 48);
     Times temp;
     cout << "Aida and Tosca:\n";
     cout << aida<<"; " << tosca << endl;
     
     temp = aida + tosca; // operator+()
     cout << "Aida + Tosca: " << temp << endl;
     
     temp = aida* 1.17; // member operator*()
     cout << "Aida * 1.17: " << temp << endl;
     cout << "10.0 * Tosca: " << 10.0 * tosca << endl;
}
void exceptionHandleing() {
    TestException t;
    try {
        t.getException();
    }catch (MyException &e) {
        cout << "My Exception is throw " << e.what() << endl;
    }
}

void writingFile() {
    ofstream out;
    
    out.open("TextFile.txt");
    if (out.is_open()) {
        out << "This is my text file" << endl;
        out << 12345 << endl;
        out.close();
    } else {
        cout << "Unable to open the file" << endl;
    }
}

void readFile() {
    ifstream inFile;
    
    inFile.open("TextFile.txt");
    string line;
    if (inFile.is_open()) {
        while (!inFile.eof()) {
            getline(inFile, line);
            cout << line << endl;
        }
       /* while (inFile) {  This will work the same way
            getline(inFile, line);
            cout << line << endl;
        } */
    } else {
        cout << "File can;t be open there is some error" << endl;
    }
}

void parsingTextFile() {
    ifstream inFile;
    
    ofstream out;
    // Creat a file and insert some taxt
    out.open("TextFile.txt");
    if (out.is_open()) {
        int i = 0;
        while(i != 4) {
            out << "Operator Number : 1" << i << endl;
            i++;
        }
        out.close();
    }
    
    // Read the same file and parse the text
    inFile.open("TextFile.txt");
    string line;
    
    if (!inFile.is_open()) {
        return;
    }
    
    while(inFile) {
            getline(inFile, line, ':');
            int number;
            inFile >> number;
            inFile >> ws; // read all the white space C++11 Feature  inFile.get() is old way todo the same thing
        
        if (!inFile) break;
        cout << line  << ":" << number << endl;
        
        }
    inFile.close();
}

void structandPading() {
    // Struct add some default padding  which we dont want to write in a file when we add data to the file

    cout << "Struct with padding : " << sizeof(Person) << endl;

    cout << "Struct without padding : " << sizeof(Person1) << endl;
}

void rwBinaryFile() {

    ofstream out;
    Person me = {"Durgesh", 36, 75};
    // Creat a file and insert some taxt
    out.open("Person.bin");
    if (out.is_open()) {
        out.write(reinterpret_cast<char*>(&me), sizeof(Person));
        out.close();
    }
    
    ifstream inFile;
    
    // Read the same file
    inFile.open("Person.bin",ios::binary);
    string line;
    
    if (!inFile.is_open()) {
        cout << "File could not be open" << endl;
    }
    Person you;
    inFile.read(reinterpret_cast<char*>(&you), sizeof(Person));
    cout << you.name  << " "<<  you.age << " " << you.weight <<  endl;
    inFile.close();

}

void vectorTemplate() {
    vector<string> name;
    name.push_back("Durgesh");
    name.push_back("Trivedi");
    name.push_back("Pushkal");
    name.push_back("Kushagra");
    
//    for(int i = 0; i< name.size(); i++) {
//        cout << name[i] << endl;
//    }
    
    for(vector<string>::iterator it = name.begin(); it != name.end(); it++ ) {
        cout << *it << endl;
    }
    vector< vector<int>> grid(3, vector<int>(4,7));
    
    grid[2].push_back(8);
    
    for(int row = 0; row < grid.size(); row++){
        for(int col = 0; col < grid[row].size(); col++) {
            cout <<grid[row][col];
        }
        cout << endl;
    }
}

void mapTemplate() {
    map<string, int> ages;
    ages["Durgesh"] = 36;
    ages["Pushkal"] = 5;
    ages["Kushagra"] = 2;
    
    for(map<string, int> :: iterator it = ages.begin(); it != ages.end(); it++) {
        cout << it->first << it->second << endl;
    }
    
    for(map<string, int> :: iterator it = ages.begin(); it != ages.end(); it++) {
        pair<string, int> age = *it;
        cout << age.first << age.second << endl;
    }
    
    cout << ages["mike"] << endl;
    
    if (ages.find("Vickey") != ages.end()) {
        cout << "Key found" << endl;
    } else {
        cout << "Key Vickey not found " << endl;
    }
    
    map<int, Person> people;
    
    people[0] = Person("Durgesh", 36, 74);
    people[1] = Person("Pushkal", 6, 14);
    people[2] = Person("kushagra", 3, 9);
    
    for(map<int, Person> :: iterator it = people.begin(); it != people.end(); it++) {
        it->second.print();
    }
    
    people.insert(make_pair(55, Person("DD",32, 65)));
    people.insert(make_pair(51, Person("BB",31, 65)));
    
    map<Person,int> person;
    
    person[Person("Durgesh", 36, 74)] = 12;
    person[Person("Pushkal", 6, 14)] = 13;
    person[Person("kushagra", 3, 9)] = 14;
    
    
    for(map<Person, int> :: iterator it = person.begin(); it != person.end(); it++) {
        it->first.print(); // You need to over load the operator  < to make it work in person
    }
    
    
    map<string,vector<int>> boo;
    boo["Mike"].push_back(10);
    boo["Rike"].push_back(20);
    boo["Mike"].push_back(30);
    boo["Dike"].push_back(20);
    boo["Lke"].push_back(30);
    
    for(map<string,vector<int>> :: iterator it = boo.begin(); it != boo.end(); it++) {
        string name = it->first;
        cout << name ;
        vector<int> lt = it->second;
        for(int index = 0; index < lt.size(); index++) {
            cout <<  " " << lt[index];
        }
        cout << endl;
    }
    
    
}

void setTemplate() {
    
    set<int> value;
    value.insert(1);
    value.insert(2);
    value.insert(2);
    for (set<int> :: iterator it = value.begin(); it != value.end(); it++) {
        cout << *it << endl;
    }
    
    set<Person> man;
    
    man.insert(Person("Durgesh", 37, 74));
    man.insert(Person("Deva", 36, 74));
    man.insert(Person("Dd", 36, 74));
    
    set<int> :: iterator number = value.find(1);
    if (number != value.end()) {
        cout << "Found the number " << *number << endl;
    }
    
    for(set<Person> :: iterator it = man.begin(); it != man.end(); it++) {
        it->print(); // You need to over load the operator  < to make it work in person
    }
    
}

void stackAndQueue() {
    
    // Stack example LIFO
    stack<Person> testStack;
    
    testStack.push(Person("Durgesh", 37, 74));
    testStack.push(Person("dd", 37, 74));
    testStack.push(Person("PP", 37, 74));
    testStack.push(Person("lv", 37, 72));
    testStack.push(Person("lv", 37, 73));
    
    
    Person per = testStack.top();
    per.print();
    testStack.pop();
    per.print();
    
    while(testStack.size() > 0) {
        Person pp = testStack.top();
        pp.print();
        testStack.pop();
    }
    
    // QUEUE example FIFO
    
    queue<Person> testQueue;
    
    testQueue.push(Person("Durgesh", 37, 74));
    testQueue.push(Person("dd", 37, 74));
    testQueue.push(Person("PP", 37, 74));
    testQueue.push(Person("lv", 37, 72));
    testQueue.push(Person("lv", 37, 73));
    
    
    Person per1 = testQueue.front();
    per1.print();
    testQueue.pop();
    per1.print();
    
    while(testQueue.size() > 0) {
        Person pp = testQueue.front();
        pp.print();
        testQueue.pop();
    }
}

// This is friend to Person
bool compare1(const Person &t1, const Person &t2) {
    return t1.name < t2.name;
}
void dequeueAndFriend() {
    vector<Person> person;
    
    person.push_back(Person("Durgesh", 37, 74));
    person.push_back(Person("dd", 37, 71));
    person.push_back(Person("ff", 37, 75));
    person.push_back(Person("ee", 37, 73));
    person.push_back(Person("bb", 37, 72));


    
    sort(person.begin(), person.end(), compare1);
    
    for (int i = 0; i< person.size(); i++) {
        person[i].print();
    }
}

void assigmentOperator() {
    Test test1;
    
    Test test2(10, "ME");
    
    test2.print();
    
    test1 = test2;
    
    test1.print();
    
    Test test3(20, "You");
    test3.print();
    
    test1 = test2 = test3;
    
    test1.print();
    
    // copy at initilization
    Test test4 = test3;
    test4.print();
}

void leftShitOperator() {
    Test test(200, "Durgesh");
    cout << test << endl;
    
    using namespace ComplexNumbering;
    
    ComplexNumber number(10, 20);
    
    ComplexNumber number1 = number;
    
    ComplexNumber number3(40, 30);
    
    cout << number <<  ":" << number3 << endl;
}
