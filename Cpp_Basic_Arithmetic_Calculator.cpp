//                          Basic Arithmetic Calculator using C++ 
//                     For Arithmetic operations including +, -, *, /

#include <iostream>
using namespace std;
int main(){
    
    
//                                   STEP 1: VARIABLES DECLARATION


    int num1, num2;                               //num1, num2 are variables declared for values input in integer datatype
    char operation;                               //operation is a variable declared for taking operator to perform in character datatype

//                                  STEP 2: USER INPUT

    cout << "Enter 1st Number: ";                 
    cin >> num1;                                //take 1st Input value from user
    
    cout << "Enter 2nd Number: ";
    cin >> num2;                                //take 2nd Input value from user
    
    cout << "Enter Operation to perform: ";
    cin >> operation;                           //take operation input from user
    
//                                 STEP 3: PROGRAM BODY    
    
        if(operation == '+'){                                        // if condition for if user input operation is of addition
        
        cout << "Sum of "<< num1 << " and " << num2 << " is : "<<num1 + num2 <<endl;             
                     
        }
        else if(operation == '-'){                                   // else if condition for if user input operation is of subtraction
        
        cout << "Subtraction of "<< num1 << " and " << num2 << " is : "<< num1 - num2 <<endl;
             
        }
        
        else if(operation == '*'){                                   // else if condition for if user input operation is of Multiplication
             
        cout << "Product of "<< num1 << " and " << num2 << " is : "<<num1 * num2 <<endl;
             
        }
        else if(operation == '/'){                                  // else if condition for if user input operation is of Division
             
             if (num2 == 0){            // condition for checking if user input of 2nd value is zero....as Division by zero is not valid in mathematics
             
             cout << "Division by Zero is not valid..."<<endl;
             return 0;         
                      
             }
             
        cout << "Division of "<< num1 << " and " << num2 << " is : "<<num1 / num2 <<endl;     
             
        }
        else {                                                      // else condition if user input operation is other than +,-,*,/
        
        cout << "ERROR!!! You Entered a Non Arithmetic Operator other than +, -, / and *..." <<endl;    
             
        }
    return 0;
    
}
