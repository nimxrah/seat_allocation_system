#include <iostream>
#include <math.h>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

class College{
    public:
    string name;
    int seats;
};

class Applicants{
    public:
    int rollno;
    int marks;
    int no_pref;
    vector <string> pref;
};

bool compare(Applicants a, Applicants b) {
    return a.marks > b.marks; 
}

int main(){
    int n = 0;
    cout << "No of colleges: " ;
    cin >> n ;
    vector <College> clg(n);
    cout << "Enter name of college and seats" << endl;

    for(int i = 0; i < n; i++){
        cin >> clg[i].name ;
        cin >> clg[i].seats ;
    }


    int c = 0;
    cout << "No of Applicants: " ;
    cin >> c ;
    vector <Applicants> appl(c);
    
    for(int i = 0; i < c; i++){
        cin >> appl[i].rollno;
        cin >> appl[i].marks;
        cin >> appl[i].no_pref;

        appl[i].pref.resize(appl[i].no_pref);
        for(int j = 0; j < appl[i].no_pref; j++){
        cin >> appl[i].pref[j] ;
        }
    }
    
    sort(appl.begin(), appl.end(), compare);

    map <int, string> results;

    int allocated = 0;
    for(int i= 0; i < c; i++){
        for(int j = 0; j < appl[i].no_pref; j++){
            for(int k = 0; k < n; k++){
                if(appl[i].pref[j] == clg[k].name && clg[k].seats > 0){
                    results.insert({appl[i].rollno, clg[k].name});
                    clg[k].seats--;
                    break;
                }
            }
            if(results.find(appl[i].rollno) != results.end()){
                break;
            }
        }
    }
    
    cout << "Outputs: " << endl;
    for(const auto &entry : results) {
        cout << "Roll No: " << entry.first << " -> College: " << entry.second << endl;
    }

    return 0;

}



