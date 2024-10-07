## Aim:
To learn impliment control statements(for and while loops).

## Apparatus:
Vs code, dev cpp,online compilar.

## Theory:
In computer programming, loops are used to repeat a block of code. For example, let's say we want to show a message 100 times. 
Then instead of writing the print statement 100 times, we can use a loop. That was just a simple example; we can achieve much more efficiency 
and sophistication in our programs by making effective use of loops.

1)FOR LOOP:- A For loop is a repetition control structure that allows us to write a loop that is executed a specific number of times.
The loop enables us to perform n number of steps together in one line.

2)WHILE LOOP:- While studying for loop we have seen that the number of iterations is known beforehand, i.e. 
the number of times the loop body is needed to be executed is known to us. while loops are used in situations where we do not know 
the exact number of iterations of the loop beforehand. The loop execution is terminated on the basis of the test conditions.
We have already stated that a loop mainly consists of three statements – initialization expression, test expression, and update expression. 
The syntax of the three loops – For, while, and do while mainly differs in the placement of these three statements.

3)DO-WHILE LOOP:- In Do-while loops also the loop execution is terminated on the basis of test conditions.
The main difference between a do-while loop and the while loop is in the do-while loop the condition is tested at the end of the loop body,
i.e do-while loop is exit controlled whereas the other two loops are entry-controlled loops.

## codes:
1.Authentication passward:

#include<iostream>

using namespace std;

int main(){

    int pass=23070123169,user_pass;

    cout<<"Please Enter the passward: ";
    
    cin>>user_pass;
    
    while(pass>0){
    
        if(user_pass==pass){
        
            cout<<"System unlocked!";

        }
        
        else{
        
            cout<<"Please Enter correct passward: ";
        }

        
            }
            
			
return 0;
    
}

2.print values between 0 and 10

#include<iostream>

using namespace std;

int main(){

    int i;

    for(i=0;i<=10;i++){
    
        if(i%2==0){
	
            cout<<i<<'\n';
	    
        }
    }
    return 0;
    
}

3.floyed series:

#include<iostream>

using namespace std;

int main(){

    int i, j, a=1;
    
    for(i=1;i<=5;i++){
    
        for(j=1;j<=i;j++){
	
            cout<<a<<" ";
	    
            a++;
	    
        }
        cout<<"\n";

4.Pattern 1:


	
    }
    return 0;
    
}

5.pattern 1

#include<iostream>

using namespace std;

int main(){

    int i,j;
    
    for(i=0;i<5;i++){
    
        for(j=0;j<=i;j++){
	
            cout<<"*";
	    
        }
	
        cout<<endl;
	
    }
    
}

6.Pattern 2:

#include<iostream>

using namespace std;

int main() {

    int i, j;
    
    for (i = 5; i > 0; i--) {
    
        for (j = 0; j < i; j++) {
	
            cout << "*";
	    
        }
	
        cout << endl;
	
    }
}

7. Pyramid:

 #include<iostream>
   
using namespace std;

int main(){
 
    int n=5; int i, j,k=5;
    
    for(i=1;i<=n;i++){
    
        for(j=1;j<=n;j++){
	
            if(j>=k){
	    
                cout<<"* ";
		
            }
	    
            else{
	    
                cout<<" ";
		
            }
	    
        }
	
        k--;
	
        cout<<"\n";
	
    }
    
    return 0;
}

## Conclusoion:

In this experiment we have implemented programs to study and understand the different loops in c++.
