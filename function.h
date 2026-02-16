#ifndef FUNCTION_H
#define FUNCTION_H

#include <vector>
#include <cstddef>

void biga(unsigned char x);
void bigb(unsigned char &x, unsigned char y);
void bigc(int &i, unsigned char h);
void bigd(int &i, unsigned char h);
void bige(int &i, unsigned char h);
void bigp(std::vector<unsigned char> &program, std::size_t &pc);

#endif
