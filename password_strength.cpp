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

        int count,upper,lower;

        do{

            input();
            
            count = 0;
            upper =0;
            lower =0;

            for(int i=0;i<p.length();i++){

                count++;
            

            if(isupper(p[i])){

                upper++;
            }
            if(islower(p[i])){

                lower++;
            }
        }


                if(count<8){

                    cout<<"Password must be atleast 8 characters!"<<endl;
                }

                if(upper==0){

                    cout<<"Password must contain an uppercase letter!"<<endl;

                }

                if(lower==0){

                    cout<<"Password must contain a lowercase letter!"<<endl;

                }

        }while(count<8||upper==0||lower==0);
    }
};

int main(){

    password l;
    l.checkchar();

}