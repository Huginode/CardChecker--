#include <iostream>
#include <vector>
#include <algorithm>
#include "functions.hpp"

using namespace std;

int main(){
    
int i = 0;

//var for card number
long num = 0;

//all the variables for Luhn's algorithm
int Luhn = 0;
int Luhn1 = 0;
int tp = 0;

//var created because of a segmentation fault
int push = 0;

//all the vectors for the luhn algorithm
vector <int> luhn;
vector <int> luhnt;
vector <int> luhn1;
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
    

        for (i = 0; i < creditCard.size(); i++){
            if(creditCard.size() % 2 == 0){
                if(i % 2 == 0){
                    push = creditCard[i]*2;
                    if(push > 9){
                        if(push == 10){
                            luhn.push_back(1);
                        }
                        else {
                        for (int i = 3; i >= 1; i--) {
                        luhnt.push_back(push % 10);
                        push /= 10;
                        }
                        
                        luhnt.erase(remove(luhnt.begin(), luhnt.end(), 0), luhnt.end());
                        
                        for(int i = 0; i <= luhnt.size() / 2; i = i + 2){
                        tp = luhnt[i]+luhnt[i+1];                        
                        luhn.push_back(tp);
                        }
                    luhnt.erase(luhnt.begin(), luhnt.end());                 
                    }
                    }                    
                    
                    else {
                    luhn.push_back(push);
                    }
                }
                else {
                    push = creditCard[i];
                    luhn1.push_back(push);
                }
            }
            else {
                if(i % 2 != 0){
                    push = creditCard[i]*2;
                    if(push > 9){
                        if(push == 10){
                            luhn.push_back(1);
                        }
                        else {
                        for (int i = 3; i >= 1; i--) {
                        luhnt.push_back(push % 10);
                        push /= 10;
                        }
                        
                        luhnt.erase(remove(luhnt.begin(), luhnt.end(), 0), luhnt.end());
                        
                        for(int i = 0; i <= luhnt.size() / 2; i = i + 2){
                        tp = luhnt[i]+luhnt[i+1];                        
                        luhn.push_back(tp);
                        }
                    luhnt.erase(luhnt.begin(), luhnt.end());                 
                    }
                    }  
                }
                else {
                    push = creditCard[i];
                    luhn1.push_back(push);
                }
            }

        }
        
        //Add all the even and all the odds
        
        for(i = 0; i <= luhn.size() && luhn1.size(); i++){
            Luhn = Luhn + luhn[i];
            Luhn1 = Luhn1 + luhn1[i];

        }

        tp = Luhn + Luhn1;

        if(tp % 10 == 0){
            cout << "Your card number " << snum << " is valid.\n";
        }
        else {
            cout << "Your card number " << snum << " is invalid.\n";
        }
    
    return 0;
    }
