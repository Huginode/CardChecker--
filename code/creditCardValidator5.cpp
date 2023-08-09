#include <iostream>
#include <vector>
#include "functions.hpp"

using namespace std;

int main(){
    
int i = 0;   

//var for card number
long num = 0;

//all the variables for Luhn's algorithm
int Luhn = 0;

//var created because of a segmentation fault
int push = 0;

//all the vectors for the luhn algorithm
vector <int> luhn;
vector <int> creditCard;
   
    
    cout << "Please Input your credit card number.\n";
    cin >> num;
    long snum = num;
    int array[to_string(num).length()];

    // convert num to array
    
    if(to_string(num).length() >= 13 && to_string(num).length() <= 16){
        for (int i = to_string(num).length(); i >= 1; i--) {
        array[i] = num % 10;
        num /= 10;
        }
    }
    
    else {
        cout << "Card number invalid please try again.\n";
    }



    //For loop to push the array in the vector
    
    for(int i = 0; i <= to_string(snum).length(); i++){
        creditCard.push_back(array[i]);
    }

    // Removing the first element of the vector because for no reason it is equal to -9000 something
    pop_front(creditCard);
    
    //Luhn's algorith :
    

        for (i = 0; i <= creditCard.size(); i++){
            if(creditCard.size() % 2 == 0){
                if(i % 2 == 0){
                    push = creditCard[i]*2;
                    if(push > 9){
                        for (int i = 3; i >= 1; i--) {
                        luhn.push_back(push % 10);
                        push /= 10;
                        }
                    }
                
                    else {
                    luhn.push_back(push);
                    }
                }
                else {
                    push = creditCard[i];
                    luhn.push_back(push);
                }
            }
            else {
                if(i % 2 != 0){
                    push = creditCard[i]*2;
                    if(push > 9){
                        for (int i = 3; i >= 1; i--) {
                        luhn.push_back(push % 10);
                        push /= 10;
                        }
                    }
                
                    else {
                    luhn.push_back(push);
                    }
                }
                else {
                    push = creditCard[i];
                    luhn.push_back(push);
                }
            }

        }
        
        //Add all the even and all the odds
        
        for(i = 0; i <= luhn.size(); i++){
            Luhn = Luhn + luhn[i];

        } 

        if(Luhn % 10 == 0){
            cout << "Your card number " << snum << " is valid.\n";
        }
        else {
            cout << "Your card number " << snum << " is invalid.\n";
        }
    
    return 0;
    }
