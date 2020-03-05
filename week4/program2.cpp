#include<iostream>

//this program is not working as intended. Will work on it more. 
int main()
{
    int Names=30; int Char=100;
    int i,j;
    char students[Names][Char];

//for(i=0;i<Names;i++)
{
    for(j=0;j<Char;j++){
    cout<<"please enter student for index" << i <<":"<<endl; 
    cin.getline(students[j],100);
}
for(i=0;i<Names;i++)
{
    for(j=0;j<Char;j++){
    cout<<students[Names][Char]<<endl;
        }
    }
}
return 0;
}