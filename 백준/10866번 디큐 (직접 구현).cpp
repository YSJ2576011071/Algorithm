#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[2*MX+1];
int head = MX, tail = MX;
int a, c;
string b;

void push_front(int x){
    dat[--head] = x;
}

void push_back(int x){
    dat[tail++] = x;
}

int pop_front(){
    if (empty()) return -1;
    return dat[head++];
}

int pop_back(){
    if (empty()) return -1;
    return dat[--tail];
}

int size(){
    return tail-head;
}

int empty(){
    if (tail == head) {
        return 1;
    }
    return 0;
}

int front(){
    if (empty()) return -1;
    return dat[head];
}

int back(){
    if (empty()) return -1;
    return dat[tail-1];
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> a;
    while (a--) {
        cin >> b;
        if (b == "push_back") {
            cin >> c;
            push_back(c);
        } else if (b == "push_front") {
            cin >> c;
            push_front(c);
        } else if (b == "front") {
            cout << front() << "\n";
        } else if (b == "back") {
            cout << back() << "\n";
        } else if (b == "size") {
            cout << size() << "\n";
        } else if (b == "empty") {
            cout << empty() << "\n";
        } else if (b == "pop_front") {
            cout << pop_front() << "\n";
        } else if (b == "pop_back") {
            cout << pop_back() << "\n";
        }
    }
}