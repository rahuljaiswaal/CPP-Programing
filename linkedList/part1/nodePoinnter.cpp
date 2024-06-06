#include <iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
void Display(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}

void DisplayWow(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
}

int size(Node* head){
    int count;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next;
        count++;
    }
    return count;
}
void DisplayRec(Node* head){
    if(head==NULL) return;
    cout<<head->val<<" ";
    DisplayRec(head->next);
}

void DisplayRecursive(Node* head){
    if(head==NULL) return;
    DisplayRecursive(head->next);
    cout<<head->val<<" ";
}

void insertAtEnd(Node* head, int val){
    Node* t = new Node(val);
    while(head->next != NULL) head = head->next;
    head->next = t;
}

int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;

    cout<<a->val<<endl;
    cout<<a->next->next->val<<endl;

    Node* temp = a;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;

    Display(a);
    cout<<endl;
    DisplayWow(a);
    cout<<endl;
    cout<<size(a);
    cout<<endl;
    DisplayRec(a);
    cout<<endl;
    DisplayRecursive(a);  // reverse
    cout<<endl;
    insertAtEnd(a,100);
    Display(a);


}