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
    long snum = num;
    int array[to_string(num).length()];

    // convert num to array
    
    if(to_string(num).length() >= 13 && to_string(num).length() <= 16){
        for (int i = to_string(num).length(); i >= 1; i--) {
        array[i] = num % 10;
        num /= 10;
        cout << "array " << array[i] << endl;
        }
    }
    
    else {
        cout << "Card number invalid please try again.\n";
    }



    //For loop to push the array in the vector
    
    for(int i = 0; i <= to_string(num).length() + 1; i++){
        int arr = array[i];
        creditCard.push_back(arr);
        cout << "arr " << arr << endl;
    }

    //Luhn's algorith : take every number with an even rank and an odd rank. Multiply them by 2.
    

        for (i = 0; i <= creditCard.size(); i = i + 2){
            if(i % 2 == 0){
                push = creditCard[i]*2;
                luhn.push_back(push);
                cout << "push " << push << endl;
            }
            else {
                push = creditCard[i]*2;
                luhn1.push_back(push);
                cout << "push" << push << endl;
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
            cout << "Your card number " << snum << " is valid.\n";
        }
        else {
            cout << "Your card number " << snum << " is invalid.\n";
        }
    
    return 0;
    }
