#include<iostream>
using namespace std;

class queue{
    public:
    //data members
    int* arr;
    int front;
    int rear;
    int size;
    queue(int s){
        this->size=s;
        arr=new int[s];
         front=0;
        rear=0;

    }
    void enqueue(int data){
       if(rear==size){
        cout<<"queue is full"<<endl;
       }
       else{
        arr[rear]=data;
        rear++;
       }

    }
    int dequeue(){
        if(front==rear){
            cout<<"kya hi pop karega"<<endl;
        }
        else{
            int ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear){
                front=0;
                rear=0;
            }
            return ans;
        }
    }
    int qfront(){
        if(front==rear){
            return -1;

        }
        else{
            return arr[front];
        }
    }
};
int main(){
    queue q(6);
    q.enqueue(10);
    q.enqueue(12);
    q.enqueue(15);
    q.enqueue(20);
    q.enqueue(25);

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
   cout<<q.qfront()<<endl;
    return 0;
}