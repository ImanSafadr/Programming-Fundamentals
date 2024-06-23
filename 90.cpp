#include<iostream>
using namespace std;
struct Student
{
    int sroll;
    float marks[5];
    float avg;
};

void Show(Student s)
{
    cout<<"\nStudent Roll is "<<s.sroll<<endl;
    for(int i = 0; i < 5; i++)
    {
        cout<<"Mark of subject "<<i+1<<" is "<<s.marks[i]<<endl;
    }
    cout<<"Marks average is "<<s.avg<<endl;
}
void getdata(Student& s)
{
    cout<<"\t\nEnter the detail of Student"<<endl;
    cout<<"Enter Roll ";
    cin>>s.sroll;

    float sum = 0.0f;
    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter mark of subject "<<i+1<<" ";
        cin>>s.marks[i];
        sum += s.marks[i];
    }
    s.avg = sum/5.0f;
}

int main()
{
    Student s[5];  /// array of structure variable
    
    /*for(int i = 0; i < 5; i++)
    {
        cin>>s[i].sroll;
        float sum = 0;
        for(int j = 0; j < 5; j++)
        {
            sum += s[i].marks[j];
            cin>>s[i].marks[j];
        }
        s[i].avg = sum/5.0f;
    }*/
    
    for(int i = 0; i < 5; i++)
    {
        getdata(s[i]);
    }

    cout<<endl;
    for(int i = 0; i < 5; i++)
    {
        Show(s[i]);
    }
    return 0;
}
