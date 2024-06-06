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

class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void insertAtHead(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx , int val){
        if(idx<0 || idx>size) cout<<"invalid index number "<<endl;
        else if(idx==0) insertAtHead(val);
        else if(idx==size) insertAtEnd(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1; i<idx; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid index ";
            return -1;
        }
        else if(idx==0) return head->val;
        else if(idx==size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i=1; i<=idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
    void deleteAtHead(){
        if(size == 0){
            cout<<"invalid list is empty !";
            return;
        }
        head = head->next;
        size--;
    }
    void deleteAtTail(){
        if(size == 0){
            cout<<"invalid list is empty !";
            return;
        }
        Node* temp = head;
        while(temp->next!=tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(idx<0 || idx>=size){
            cout<<"invalid index ";
            return;
        }
        else if (idx == 0) return deleteAtHead();
        else if (idx == size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i = 1; i<idx; i++){
                temp = temp ->next;
            }
            temp->next = temp -> next ->next;
            size--;
        }
    }
    void Display(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
};

int main(){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.Display();
    ll.insertAtEnd(30);
    ll.Display();
    ll.insertAtHead(100);
    ll.Display();
    ll.insertAtHead(200);
    ll.Display();
    ll.insertAtIdx(2,500);
    ll.insertAtIdx(0,800);
    ll.Display();
    cout<<ll.getAtIdx(3)<<endl;
    cout<<ll.getAtIdx(2)<<endl;
    ll.deleteAtHead();
    ll.Display();
    ll.deleteAtTail();
    ll.Display();
    ll.deleteAtIdx(2);
    ll.Display();

}