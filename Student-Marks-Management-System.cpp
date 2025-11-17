//This is a Student Marks Management System
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int limit;
    int maxsubject=1;
    int minsubject=1;
    cout<<"Enter the Number of Subjects: "; //Specifies the number of Subjects
    cin>>limit;
    int marks[limit];
    for(int i=0;i<limit;i++)
    {
        cout<<"Enter Marks of Subject "<<i+1<<" : "; //Loop for Marks Input
        cin>>marks[i];
    }
    int sum=0;
    for(int j=0;j<limit;j++)
    {
       sum=sum+marks[j];            //Loop to calculate Sum
    }
    float average=float(sum)/limit;
    cout<<fixed<<setprecision(2)<<"Average of numbers is: "<<average;
    int maximum=0;
    int subject;
    for (int index=0;index<limit;index++)
    {
        if(marks[index]>maximum){
            maximum=marks[index];               //Loop to find Maximum Marks
            maxsubject=index+1;
        }
    }
    cout<<"\nHighest Numbers are in Subject "<<maxsubject<<" : "<<maximum;
    int minimum=marks[0];
    for (int minindex=1;minindex<limit;minindex++)
    {
        if(marks[minindex]<minimum)
        {
            minimum=marks[minindex];            //Loop for Minimum Marks
            minsubject=minindex+1;
        }
    }
    cout<<"\nLowest Numbers are in subject "<<minsubject<<" : "<<minimum;



}
