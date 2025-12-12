#include <iostream>
#include <string> 
#include <cmath> 

using namespace std;

int main(){
    string name, MO , day, Free ;
    int id; 
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin, name);
    cout << name ;
    cout << "\nFahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": "; 
    cin >> id ;
    int gg = id / pow(10,7) - 12 ;
    cout << "\nFahsai: I think you may be GEAR " << gg << ". I have a free movie ticket for you.";
    cout << "\nFahsai: Let's go to the cinema together!!!";
    cout << "\nFahsai: What movie do you want to watch?";
    cin.ignore();
    cout << "\n" << name << ": ";
    getline(cin, MO);
    cout <<  MO;
    cout << "\nFahsai: So....which day are you free to go with me?";
    cout << "\n" << name << ": ";
    getline(cin, day);
    cout << name << ": " << day << endl;
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << MO << " with you.\n";
    cout << name << ": ";
    getline(cin, Free);
    cout <<  Free ;
    cout << "\nFahsai: 555+ see you Next Monday. Bye Bye \\(^ ^)/";
    return 0;
}