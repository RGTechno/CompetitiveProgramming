#include <iostream>
#include <queue>
using namespace std;

int main()
{
    long long int a, b, c;
    cin >> a >> b >> c;

    priority_queue<long long int> q;

    q.push(a);
    q.push(b);
    q.push(c);

    q.pop();
    cout<<q.top();

    return 0;
}