#include <iostream>
#include <vector>

using namespace std;


int main(){
    
int i = 0;   

//var for card number
long num = 0;

//all the variables for Luhn's algorithm
int Luhn = 0;
int Luhn1 = 0;

//var created because of a segmentation fault
int push = 0;

//sum for the last step of the luhn's algorithm
long sum = 0;

//all the vectors for the luhn algorithm
vector <int> luhn;
vector <int> luhn1;
vector <int> creditCard;



    
    cout << "Please Input your credit card number.\n";
    cin >> num;
    
    //For loop to know if it's a credit card with 14 or 16 numbers
    
    for(int i = 0; i <= num; i++){
        creditCard.push_back(num);
    }

    //Luhn's algorith : take every number with an even rank and an odd rank. Multiply them by 2.
    
    if (creditCard.size() == 16){
        for (i = 0; i <= creditCard.size(); i = i + 2){
            if(i % 2 == 0){
                push = creditCard[i]*2;
                luhn.push_back(push);
            }
            else {
                push = creditCard[i]*2;
                luhn1.push_back(push);
            }
            
        }
        
        //Add all the even and all the odds
        
        for(i = 0; i <= luhn.size(); i++){
            Luhn = Luhn + luhn[i];

        } 
        for(i = 0; i <= luhn1.size(); i++){
            Luhn1 = Luhn1 + luhn1[i];

        }

        //Add them toghether and see if it can be divided by 10
        sum = Luhn + Luhn1;
        if(sum % 10 == 0){
            cout << "Your card number " << num << " is valid.\n";
        }
        else {
            cout << "Your card number " << num << " is valid.\n";
        }
    }
    
    //Same as the if
    else {
        for (i = 0; i <= creditCard.size(); i = i + 2){
            if(i % 2 == 0){
                push = creditCard[i]*2;
                luhn.push_back(push);
            }
            else {
                push = creditCard[i]*2;
                luhn1.push_back(push);
            }
            
        }
        
        for(i = 0; i <= luhn.size(); i++){
            Luhn = Luhn + luhn[i];

        }

        for(i = 0; i <= luhn1.size(); i++){
            Luhn1 = Luhn1 + luhn1[i];

        }

        sum = Luhn + Luhn1;
        if(sum % 10 == 0){
            cout << "Your card number " << num << " is valid.\n";
        }
        else {
            cout << "Your card number " << num << " is valid.\n";
        }
    }

return 0;
}

