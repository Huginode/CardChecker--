#include <iostream>
#include <vector>

using namespace std;


int main(){
    
    

int num = 0;
int i = 0;
int Luhn = 0;
int Luhn1 = 0;
int sum = 0;
vector <int> luhn;
vector <int> luhn1;
vector <long> creditCard;

    
    cout << "Please Input your credit card number.\n";
    cin >> num;
    for(int i = 0; i <= num; i++){
        creditCard.push_back(num);
    }

    
    if (creditCard.size() == 14){
        for (i = 0; i <= creditCard.size(); i = i + 2){
            if(i % 2 == 0){
                luhn.push_back(creditCard[i*2]);
            }
            else {
                luhn1.push_back(creditCard[i*2]);
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
    
    
    else {
        for (i = 0; i <= creditCard.size(); i = i + 2){
            if(i % 2 == 0){
                luhn.push_back(creditCard[i*2]);
            }
            else {
                luhn1.push_back(creditCard[i*2]);
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

