//BMI calculator
#include<iostream>
using namespace std;
int main(){
    float height,weight,BMI;

    //Taking input from user
    cout<<"Enter the height(m): ";
    cin>>height;
    cout<<"Enter the weight(kg): ";
    cin>>weight;
    
    //checking for invalid input
    if(height <= 0 || weight <= 0){
        cout<< "Invalid input!"<< endl;
        return 0;
    }
   

    //BMI formula
    BMI = weight/(height*height);
    cout<< "Your BMI is: " << BMI << endl;
    
    //Classification on the basis of standard bmi ranges
    if( BMI < 18.5 ){
        cout<< "Underweight" << endl;
    }
    else if( BMI < 25 ){
        cout<< "Healthy (normal weight)" << endl;
    }
    else if( BMI < 30 ){
        cout<< "Overweight" << endl;
    }
    else{
        cout<< "Obese" << endl;
    }

    return 0;
}