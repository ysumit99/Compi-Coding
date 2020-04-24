#include<bits/stdc++.h>
using namespace std;

void showpq(priority_queue<int> pq){
    priority_queue<int> copypq = pq;

    while(!copypq.empty()){
        cout << copypq.top() << endl;
        copypq.pop();
    }
}

int main(){

    //priority queues are MaxHeap by default
    priority_queue<int> pq;

    pq.push(30);
    pq.push(20);
    pq.push(10);
    pq.push(40);

    showpq(pq);

    return 0;
}