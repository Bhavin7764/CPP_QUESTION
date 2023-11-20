///Q-1 FIRST CODE IN CPP //

#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello world";     // OUTPUT = Hello world // 
}

//Q-2 VARIABLE // 

#include<iostream>
using namespace std;
int main()
{
    int a = 10 ;
    cout<<"a = "<<a;    // output = a = 10 //
}

//Q-3 WAP TO FIND VALUE OF DATA TYPE // 

#include<iostream>
using namespace std;
int main()
{
      cout<<"int = "<<sizeof(int)<<endl;  // SIZE OF OPERATOR USED TO FIND SIZE PF DATA//
      cout<<"char = "<<sizeof(char)<<endl;  
      cout<<"float = "<<sizeof(float)<<endl;
      cout<<" string = "<<sizeof(string)<<endl;
      cout<<"bool = "<<sizeof(bool)<<endl;
      cout<<" double = "<<sizeof(double)<<endl;
      cout<<" long = "<<sizeof(long)<<endl;

      /*  output = 
      int = 4
char = 1
float = 4
 string = 24
bool = 1
 double = 8
 long = 4 */
} 

// Q - 4 WAP TO ADD TWO NUMBER BY USER //

#include<iostream>
using namespace std;
int main()
{
      int a , b ;
      cout<<"Enter the a = ";
      cin>>a;
      cout<<"Enter the b = ";
      cin>>b;
      cout<<"a + b  = "<<a+b;

      /* OUTPUT = 

        Enter the a = 10
        Enter the b = 20
        a + b  = 30

      */
} 

/* Q - 5 HOW MANY TYPES OF HEADER FILE IN CPP
  THERE ARE TWO TYPES OF HEADER FILE IN CPP.
  1) SYSTEM HEADERFILE = IT COMES WITH COMPILER. EX = #INCLUDE<IOSTREAM>
  2) USER DEFINED HEADER FILE = IT IS DEVELOPED BY PROGRAMMER. EX = #INCLUDE<THIS.H>
  NOTE : - THIS HEADER FILE WORK WHEN "THIS.H" FILE HAVE IN YOUR FOLDER DIRECTORY

   LINK FOR SYSTEM HEADER FILE :- https://en.cppreference.com/w/c/header
*/

/* Operators in c++
 1.Arithmatic
 2.Assiganment
 3.Increement-Dicreement
 4.Conditional
 5.Relational
 6. Boolean
 7. Special 
 8. Bitwise
 9. logical
 10. Scope resoulation


1) Arithmatic operation :- It is used to perform arithmatic operation in cpp.

*/

#include<iostream>
using namespace std;
int main()
{
      int a = 10 , b = 20 ;
      cout<<" a + b = "<<a+b<<endl;
      cout<<" a - b = "<<a-b<<endl;
      cout<<" a * b = "<<a*b<<endl;
      cout<<" a / b = "<<a/b<<endl;
      cout<<" a % b = "<<a%b<<endl;
      cout<<" a++ = "<<a++<<endl;
      cout<<" a-- = "<<a--<<endl;
      cout<<" ++a = "<<++a<<endl;
      cout<<" --a = "<<--a<<endl;

      /* optput =
       a + b = 30
 a - b = -10
 a * b = 200
 a / b = 0
 a % b = 10
 a++ = 10
 a-- = 11
 ++a = 11
 --a = 10 
      */
} 

//2) Assiganment operator :- assigan value to a variable.

#include<iostream>
using namespace std;
int main()
{
    int a = 3 , b = 9 ;
    char c = 'd';
} 

// 3) Increement - Dicreement :- value  Increement & Dicreement//

#include<iostream>
using namespace std;
int main()
{
      int a = 10 , b = 20 ;
      cout<<" a++ = "<<a++<<endl;
      cout<<" a-- = "<<a--<<endl;
      cout<<" ++a = "<<++a<<endl;
      cout<<" --a = "<<--a<<endl;

        /* optput =
       
 a++ = 10
 a-- = 11
 ++a = 11
 --a = 10 
      */
} 

/* 4) Conditional operator :- it is also known as turnary operator. 
  syntax :-
            condition?cout<<"":cout<<""; 
*/

/*
5) Relational operator :- define relation between operands.
ex := < , > , >= , <= , == , = 
*/

/*
6)  Boolean operator = It gives value in true or false. where true = 1 , false = 0 ;
*/

/*
7)  Bitwise operator :- convert into the bit.
*/

/*
 8) Size of operator :- define size of data type or oprator.
*/

/*
9) Logical operator :- It is also known as boolean operator .
*/

/*
10) scope resoulation :-  It is used to print global variable. sign of scope resoulataion is " :: " . 
*/
#include<iostream>
using namespace std;
int a = 20;
int main()
{
    int a = 10 ;
    cout<<"local a = "<<a<<endl;
    cout<<"global a = "<<::a;

} 


// Q - 6  REFREANCE VARIABLE :- IT IS USED TO CREATE NEW VARIABLE BUT IT'S COMMONLY USED TO CHANGE EXISTING VARIABLE WITH ANOTHER NAME.

#include<iostream>
using namespace std;
int a = 20;
int main()
{
    int a = 10;
    int &b = a;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;

    /*
     output = 
    a = 10
    b = 10
    */
} 


/* Q- 7  TYPECASTING = IT IS USED TO CTREATE NEW DATA TYPES BUT COMMONLY IT USED TO CHANGE EXISTING DATA TYPES WITH ANOTHER NAME
                There are two types of typecasting = 1) implicit = performed by compiler (2) Explicit = performed by user
*/
#include<iostream>
using namespace std;
int main()
{
    char a = 'a';
    cout<<"a = "<<int(a);

    //output = 97//
} 

/*  Q-8  CONSTANT :- THEY HAVE FUXED VALUE . THEY DO NOT CHANGE . 
   
*/
#include<iostream>
using namespace std;
int main()
{
        const int a = 10 ;
        cout<<"a = "<<a;
} 


/* Q=9 OPERATOR PRECEDENCE :- IT IS SIMILLER AS BOAD MASS RULE */
#include<iostream>
using namespace std;
int main()
{
         int a = 3 , b = 4  ;
         int c = a *5+b;
        cout<<"c = "<<c;

        /*
        output = 19

        Link for operator pecedence = https://en.cppreference.com/w/cpp/language/operator_precedence
        */
} 



