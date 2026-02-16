#include <bits/stdc++.h>
using namespace std;

void biga(unsigned char S) {
    cout << S;
}
void bigb(unsigned char &S, unsigned char h) {
    S = h;
}
void bigc(int &i, unsigned char h){
    i = h - '0';
}
void bigd(int &i, unsigned char h){
    int x = h - '0';
    i = x + 1;
}
void bige(int &i, unsigned char h){
    int x = h - '0';
    i = x - 1;
}

void bigp(vector<unsigned char> &program, size_t &pc) {

    pc++;  // Pの次へ

    while (pc < program.size() && program[pc] != ';') {
        cout << program[pc];
        pc++;
    }
    cout << endl;
    pc++;  // ';' をスキップ
}