#include<iostream>
#define SIZE 5
using namespace std;


class queue{
    int front,rear;
    int data[SIZE];
public:
    queue(){
        rear=front=-1;
    }
    bool isFull(){
        return (rear==SIZE-1);
    }
    bool isEmpty(){
        return (front==-1 || front>rear);
    }
    void insert(int x){
        if (rear==-1){   // first item is being inserted
            front=rear=0;
            data[rear]=x;
        }
        else{
            if (isFull())
                cout<<"\nLast index filled in queue \n";
            else
                data[++rear]=x;
        }
    }

    int dequeue(){
        if (!isEmpty()){
            return (data[front++]);
        }
        else
        {
            cout<<"Queue is empty ";
            return -999;
        }
    }
    void show(){
        int t;
        string str;
        if (!isEmpty()){
            t = front;
            while (t <= rear)
                cout<< data[t++] << " - ";
        }
        else{
            cout << "No data in queue";
        }
    }
};
int main(){

    queue q1;

    if (q1.isFull()) {cout<<"queue is full";}
    if (q1.isEmpty()) {cout<<"queue is empty";}

    q1.insert(100);
    q1.insert(50);

    if (q1.isFull()) {cout<<"queue is full";}
    if (q1.isEmpty()) {cout<<"queue is empty";}
    cout<<"\n";
    q1.show();
    cout<<"\n [" <<q1.dequeue() <<"]\n";
    q1.show();
    cout<<"\n [" <<q1.dequeue() <<"]\n";

    q1.insert(500);
    q1.insert(40);
    q1.insert(30);


    if (q1.isFull()) {cout<<"queue is full\n";}
    q1.insert(50);
    cout << q1.dequeue();
    if (q1.isEmpty()) {cout<<"queue is empty\n";}
}

