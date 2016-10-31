#include<iostream>
#include "Stack.h"

using namespace std;

int main()
{
Stack s1(5);
s1.push(10);
s1.push(20);
s1.push(30);
s1.push(40);
s1.push(50);

int a = s1.top();
cout << a;
s1.push(10);
s1.isStack_full();
s1.isStack_empty();
s1.pop();

return 0;
}

