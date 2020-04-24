#include<bits/stdc++.h>
using namespace std;

void showpq(priority_queue<int, vector<int>, greater<int> > pq){
    priority_queue<int, vector<int>, greater<int> > copypq = pq;

    while(!copypq.empty()){
        cout << copypq.top() << endl;
        copypq.pop();
    }
}

int main(){

    priority_queue <int, vector<int>, greater<int> > pq;

    pq.push(45);
    pq.push(15);
    pq.push(25);
    pq.push(75);
    pq.push(35);

    showpq(pq);
    
    return 0;   
}