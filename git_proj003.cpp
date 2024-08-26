#include <iostream>
using namespace std;


void printBoard(){
    
    for(int j=0; j<7; j++){
        if(j%2){
            for(int i=0; i<7;i++){
                if(i%2){
                    cout<<" ";
                }
                else{
                    cout<<"|";
                }
                
            }
        }
        else{
            for(int i=0; i<7;i++){
                if(i%2){
                    cout<<"-";
                }
                else{
                    cout<<"+";
                }
                
            }
        }
        cout<<endl;
    }
}



int main() 
{

printBoard();





return 1;


}