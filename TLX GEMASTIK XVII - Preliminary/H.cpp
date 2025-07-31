/*
GEMASTIK XVII 2024 - Penyisihan
[H] Tumpukan Kartu (https://tlx.toki.id/problems/gemastik-2024-pemrograman-penyisihan/H)

Solved by   : codewara
Solve date  : 29-07-2025
*/

#include <bits/stdc++.h>
#define dd(x) cout << (x) << endl;
#define skibidi ios_base::sync_with_stdio(false);
#define dop cin.tie(NULL);
#define dob cout.tie(NULL);
#define int long long
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define lla(x) (x).rbegin(), (x).rend()
#define rep(i, x, y) for (int i = (x); i < (y); i++)
#define per(i, x, y) for (int i = (x); i >= (y); i--)
using namespace std;

struct Node {
    int val;
    Node *next;
    Node *prev;
};

struct List {
    Node *head;
    Node *tail;

    List() {
        head = NULL;
        tail = NULL;
    }

    void push_front(int val) {
        Node *new_node = new Node();
        new_node->val = val;

        if (head == NULL) {
            new_node->next = NULL;
            new_node->prev = NULL;
            tail = new_node;
        } else {
            new_node->next = head;
            new_node->prev = NULL;
            head->prev = new_node;
        }
        head = new_node;
    }

    void push_back(int val) {
        Node *new_node = new Node();
        new_node->val = val;
        
        if (head == NULL) {
            new_node->next = NULL;
            new_node->prev = NULL;
            head = new_node;
        } else {
            new_node->next = NULL;
            new_node->prev = tail;
            tail->next = new_node;
        }
        tail = new_node;
    }

    void print() {
        Node *curr = head;
        while (curr != tail) {
            cout << curr->val << " ";
            curr = curr->next;
        }
        cout << tail->val << endl;
    }
};

void G(List *L, Node *adr) {
    if (L->head != adr) {
        Node *last = adr->prev;
        adr->prev->next = NULL;
        L->tail->next = L->head;
        L->head = adr;
        L->tail = last;
    }
}

void solve () {
    char op; int N, K, X;
    cin >> N >> K;
    int sum = N;
    unordered_map<int, Node*> adr;
    List v; while (N--) {
        cin >> X;
        v.push_back(X);
        adr[X] = v.tail;
    }
    while (K--) {
        cin >> op >> X;
        if (op == 'G') G(&v, adr[X]);
        else {
            v.push_front(X);
            adr[X] = v.head;
            sum++;
        }
    }

    cout << sum << endl;
    v.print();

}

signed main () {
    skibidi dop dob
    int t = 1;
    while (t--) solve ();
    return 0;
}

/*
Brief Problem Statement:


Solution:

*/
