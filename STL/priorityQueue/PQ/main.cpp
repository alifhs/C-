#include <iostream>
#include<queue>

using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(20);
    pq.push(13);
    pq.push(49);

    while(!pq.empty()) {
        cout << pq.top() << endl;
        pq.pop();
    }

    return 0;
}
