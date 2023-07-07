#include <iostream>

#include <time.h>

void delay(int number_of_seconds)
{

    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}
using namespace std;
int main()
{
   system("cls");
    int h, m, sec;

    cout << "enter current time in format hour:min:sec ";
    cin >> h >> m >> sec;
    while (h < 24)
    {
        while (m < 60)
        {
            while (sec < 60)
            {    delay(1);
                  system("cls");
                  for(int i=0;i<10;i++)
                  cout<<endl;
                  for(int i=0;i<5;i++)
                  cout<<"\t";
                cout<<"hh :mm :sec"<<endl;
                sec++;

                  for(int i=0;i<5;i++)
                  cout<<"\t";
                cout<<h<<" : "<<m<<" : "<<sec<<endl;
            }
            m++;
            sec=0;
        }

        h++;
        m=0;
    }
    return 0;
}
