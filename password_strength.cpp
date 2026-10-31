#include<iostream>
#include<string>
#include<cctype>

using namespace std;

string p;
class password{

    public:

     string input(){
        cout<<"Enter password: ";
        cin>>p;
        return p;

    }

    void checkchar(){

        int count;
        do{

            input();
            
            count = 0;

            for(int i=0;i<p.length();i++){

                count++;
            }

                if(count<8){

                    cout<<"Password must be atleast 8 characters!"<<endl;
                }
        }while(count<8);
    }
};

int main(){

    password l;
    l.checkchar();

}