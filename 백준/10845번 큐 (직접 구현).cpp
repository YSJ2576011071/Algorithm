#include <string>
#include <iostream>
using namespace std;

int res = 0;
int a = 0;
string comment;
int arr[1000005];
int head = 0;
int tail = 0;

void push(int x) {
    arr[tail++] = x;
    tail;
}
int pop() {
    if (head == tail) {
        return -1;
    } else {
        res = head;
        head++;
        return arr[res];
    }
}
int size() {
    return tail - head;
}
int empty() {
    if (size() == 0) {
        return 1;
    } else {
        return 0;
    }
}
int front() {
    if (size() == 0) {
        return -1;
    } else {
        return arr[head];
    }
}
int back() {
    if (size() == 0) {
        return -1;
    } else {
        return arr[tail-1];
    }
}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> a;

    for (int i = 0 ; i < a ; i++) {
        cin >> comment;

        if (comment == "push") {
            int num = 0;
            cin >> num;
            push(num);
        } else if (comment == "pop") {
            cout << pop() << "\n";
        } else if (comment == "size") {
            cout << size() << "\n";
        } else if (comment == "empty") {
            cout << empty() << "\n";
        } else if (comment == "front") {
            cout << front() << "\n";
        } else if (comment == "back") {
            cout << back() << "\n";
        }
    }
}