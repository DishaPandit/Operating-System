#include<iostream>
#include<thread>
#include<unistd.h>

using namespace std;

void taskA()
{
    for(int i = 0; i<5; i++)
    {
        sleep(1);
        cout<<"Task A : "<<i;
        fflush(stdout);
    }
}

void taskB()
{
    for(int i = 0; i<5; i++)
    {
        sleep(1);
        cout<<"Task B : "<<i;
        fflush(stdout);
    }
}

int main()
{
    thread t1(taskA);
    thread t2(taskB);

    t1.join();
    t2.join();

    return 0;
}