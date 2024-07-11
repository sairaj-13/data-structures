#include<iostream>
using namespace std;
class Hero{
    //peroperties and data members
    // int health;
    // char level;
    // //by default priveate hai
    // public:
    // int health;
    //  char level;
    //  // jaise yaha function banake access karu toh niche underline nahi aayegaa
    //  void print(){
    //     cout<<level<<endl;
    private:
    int health;
    public:
    char level;
    int gethealth(){
        return health;
    }
    int sethealth(int h){
        health=h;
    }
// abhio tak dikh nahi raha tha also ye  defaut const
Hero(){
    cout<<"construcalled called ho gaya jaise hi object create huaua"<<endl;
}
//parameterised
Hero(int health){
    cout<<this<<endl;
    //this keyword wo pointer hai basically and wo current object ke address stor karega hai
    this->health=health;

}

     };


int main(){
//     Hero srk;
//     //dynamically create
//     Hero* h=new Hero;
//     cout<<"health is"<<(*h).gethealth()<<endl;
// cout<<"health is"<<h->gethealth()<<endl;

// h->sethealth(60);
// cout<<"health is"<<h->gethealth()<<endl;



// // cout<<"health is"<<srk.health<<endl;
// // cout<<"level is"<<srk.level<<endl;
// // //set values because uper garbage values the
// // srk.health=58;
// // srk.level='A';
// // cout<<"health is"<<srk.health<<endl;
// // cout<<"level is"<<srk.level<<endl;
// srk.sethealth(59);

// cout<<"health is"<<srk.gethealth()<<endl;
// //size8aagaya 5 nahi(4+1); padding greedy alignment
// //when an obkject is created constructor is called;

// //constructor invoke when obkect is created no return type no ip parameter abhi tak dikh nahi raha but hum khud bana sakte hai

cout<<"shahrukh banane se pehle"<<endl;
Hero shahrukh(10); 
cout<<"address of shahrukh "<<&shahrukh<<endl;
cout<<"shahrukh banane ke baad"<<endl;


//     cout<<sizeof(srk)<<endl;//1 byte allocate for track identification

}