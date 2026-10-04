//simple linear search : sequsntial search / search one by one
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int marks_list[] = {40,50,60,70,80,100};
    string grade_list[] = {"F","D","C","B","A-","A"};

    int mark=0;

    cout<<"Enter your mark :";
    cin>>mark;

    //use a loop to find out the maark is locaated in which position in the mark list
    int pos = 0; //marker mark r=the grade index
    for (int i = 0; i < 6; i++)
    {
        //if std mark is bigger than the mark list
        if(mark>=marks_list[i])
        {
            pos++;    //move to the next position
        }
        else
            //if the mark is not bigger , then need to stop here
        {
            break;
        }
    }

    //help me display  the std grade
    cout<<"\nStudent marks :"<<mark<<endl;
    cout<<"\nStudent Grade :"<<grade_list[pos]<<endl;

    return 0;
}