#include <iostream>
using namespace std;
class Studentd{
public:
    string name;
    int rno;
    float marks;
    Studentd(string n, int  r, float m){
        name=n;
        rno=r;
        marks=m;
    }

    // Studentd(string name, int  rno, float marks){
    //     this->name=name;
    //     this->rno=rno;
    //     this->marks=marks;
    // }
};
int main(){
    Studentd s ("Rahul",18,87.4);
    // Studentd* s = new Studentd("Rahul",18,87.4);
    // Studentd s;
    // s.name = "Rahul";
    // s.rno = 18;
    // s.marks = 87.4;
    cout<<s.name<<endl;
    Studentd *ptr = &s;
    // (*ptr).name = "virat";
    ptr->name="virat";
    cout<<s.name<<endl;

}