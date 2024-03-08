#include <iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec){
    if(sr>er || sc>ec ) return 0;
    if(sr==er && sc==ec) return 1;
    int rightway = maze(sr,sc+1,er,ec);  
    int downway = maze(sr+1,sc,er,ec); 
    int totalway = rightway + downway;
    return totalway; 
}

void printPath(int sr, int sc, int er, int ec, string s){
    if(sr>er || sc>ec ) return;
    if(sr==er && sc==ec) {
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc+1,er,ec,s+'R');  
    printPath(sr+1,sc,er,ec,s+'D'); 
}

int maze2(int er, int ec){
    if(1>er || 1>ec ) return 0;
    if(1==er && 1==ec) return 1;
    int rightway = maze2(er,ec-1);  
    int downway = maze2(er-1,ec); 
    int totalway = rightway + downway;
    return totalway;
}

void printPath2(int er, int ec, string s){
    if(1>er || 1>ec ) return;
    if(1==er && 1==ec) {
        cout<<s<<endl;
        return;
    }
    printPath2(er,ec-1,s+'R');  
    printPath2(er-1,ec,s+'D'); 
}

int main(){
    cout<<maze(1,1,3,3)<<endl;   // 3 * 3    matrix
    printPath(1,1,3,3,"");
    cout<<endl;
    cout<<maze2(3,3)<<endl; // 3 row    3 column
    printPath2(3,3,"");
}