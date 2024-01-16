#include<iostream>
using namespace std;

int main()
{
    int num=10;
    int *ptr=&num;

    cout<<"Number:"<<num<<endl;
    cout<<"Number by Pointer:"<<*ptr<<endl;
    cout<<"Number Address:"<<ptr<<endl;

    num=num+1;
    cout<<"Number:"<<num<<endl;
    cout<<"Number by Pointer:"<<*ptr<<endl;
    cout<<endl;

    *ptr=*ptr+1;
    cout<<"Number:"<<num<<endl;
    cout<<"Number by Pointer:"<<*ptr<<endl;
    cout<<"Number Address:"<<ptr<<endl;

    //Copying Pointer
    int *copy=ptr;
    cout<<"Number by Copy Pointer:"<<*copy<<endl;
    cout<<"Number Address By Copy Pointer:"<<ptr<<endl;
    cout<<endl;

    *copy=*copy+1;

    cout<<"Number by Copy Pointer:"<<num<<endl;
    cout<<"Number Address By Copy Pointer:"<<copy<<endl;


    //Null Pointer- We can initialize a pointer variable when that pointer variable is 
                    //not assigned any actual memory address.

    int *n=0;     
    int i=20;;
    n= &i;
    cout<<"Number by Pointer:"<<*n<<endl;


    cout<<"Adress Before Update:"<<n<<endl;
                                 //when adding one to a pointer, the pointer is 
                                 //made to point to the following element of the same type.

    n=n+1;                       //New Address and Value
    cout<<"Address Update:"<<n<<endl;   
    cout<<"Number by Pointer:"<<*n<<endl;




    //Double Pointer-Second pointer is used to store the address of the first pointer
    int temp=30;
    int *ptr1=&temp;
    int **ptr2=&ptr1;      

    cout<<"Address of ptr1: "<<ptr1<<endl;
    cout<<"Address of ptr1 by Double Pointer:"<<*ptr2<<endl; 



    //void pointer-it has no associated type with it. A void pointer can hold an 
    //address of any type and can be typecasted to any type. 
    //Thus we can use the void pointer to store the address of any variable.
    void *tmp;

    int j = 10;
    tmp=&j;

    cout<<endl;
    cout << "Address of variable j " << & j << endl;
    cout << "Address where the void pointer is pointing " << tmp <<  endl;




    //wild Pointer-A pointer behaves like a wild pointer when declared but not initialized. 
    //So, they point to any random memory location.
    int * p; /* wild pointer */
    int c = 10;
    p = &c; /* p is not a wild pointer now*/
    * p = 12; /* This is fine. Value of a is changed */


    
    int exp[4]={1,2,3,4};
    cout<<*exp<<""<<endl;
    cout<<*exp+1<<""<<endl;







}