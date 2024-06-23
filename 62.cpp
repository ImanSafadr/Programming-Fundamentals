#include<iostream>
using namespace std;

void Get(float&, float&, char&);
float calculator(float, float, char);
void Show(float);

int main()
{
    float no1, no2;
    char opt;

    Get(no1, no2, opt);
    float res = calculator(no1, no2, opt);
    Show(res);

    return 0;
}
void Get(float& n1, float& n2, char& op)
{
    cout<<"Enter No-1 ";
    cin>>n1;
    cout<<"Enter No-2 ";
    cin>>n2;
    cout<<"Enter operator ";
    cin>>op;
}
void Show(float r)
{
    cout<<"\nOutput is "<<r<<endl;
}
float (float n1, float n2, char opt)
{   
    float result = 0.0f;
    switch(opt)
    {
        case '+':
            result = n1+n2;
            break;
        case '-':
            result = n1-n2;
            break;
        case '*':
            result = n1*n2;
            break;
        case '/':
            result = n1/n2;
            break;
        default :
            cout<<"Invalid operator"<<endl;
    }
    return result;
}

