#include <iostream>
using namespace std;
int main()

/*{
int age =20;
if(age>=20) {
cout<<"adult"<<endl;
}

else {

    cout<<"child";

}

return 0;
}

{
int age;

cout<<"Enter your age: ";
cin>>age;

if (age>=20)
{

    cout<<"You are an adult now."<<endl;
}

else
{

    cout<<"You are a child now."<<endl;
}

return 0;


}

{

    float marks;
    cout << "Enter your marks:";
    cin >> marks;

    if (marks >= 33)
    {
        cout << "congrats you are passed." << endl;
    }

    else
    {
        cout << "Sorry, you are failed." << endl;
    }

    return 0;
}



{

    int a, b;

    cout << "enter a :";
    cin >> a;

    cout << "enter b :";

    cin >> b;

    if (a > b)

    {
        cout << "the largest number is:" << a << endl;
    }
    else
    {
        cout << "the big number is:" << b << endl;
    }
}




{
    int age = 14;
    cout<<"enter your age:";
    cin >>age;
if (age>=18)
{
    cout<<"you can vote now"<<endl;

}
else
{
    cout<<"you are not eligible for voting yet"<<endl;
}
return 0;



} 

{
    float marks;
    cout<<"enter your marks:";
    cin>>marks;

    if(marks>=33)
    {
        cout<<"passed";

    }
    else
    {
        cout<<"failed";


    }
    return 0;
}

{
int a ,b ;
cout<<"Enter your 1st number:";
cin>>a;

cout<<"Enter your 2nd number:";

cin>>b;

if(a>b)

{
    cout<<"largest number is:"<<a;

}

else
{
    cout<<"largest number is :"<<b;
}

return 0;

}
'


{
    int num;
    cout<<"enter your number:";
    cin>>num;

    if(num%2==0)
    {
        cout<<"even";

    }
    else
    {cout<<"odd";
    }
    return 0;

}


{
    int marks;
    cout<<"enter your mark";
    cin>>marks;

    if(marks>=80)
    {
        cout<<"A";
    }

    else if(marks>=70)
    {
        cout<<"B";
    }
    
    else
    {
        cout<<"c";

    }
    return 0;


}
*/

{

int income;
float tax;


cout<<"Enter your income (in lakhs):";
cin>>income;

if (income<5)
{
    tax=0;
}
else if (income<=10)
{
    tax=0.2*income;
}

else
{
    tax=0.3*income;
}

cout<<"your tax is:"<<tax*100000;

return 0;

}