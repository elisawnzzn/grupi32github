#include <iostream>
#include <string>
using namespace std;

struct Studenti {
    string emri;
    int id;
    int semestri;
    float pjesemarrja;
    float nota[6];
    float mesatarja;
};

void futTeDhenaStudenti(Studenti &s) {
    cout << "Shkruaj emrin: ";
    cin >> s.emri;
    cout << "Shkruaj ID: ";
    cin >> s.id;
    cout << "Shkruaj semestrin: ";
    cin >> s.semestri;
}