#include <bits/stdc++.h>
#include "function.h"
using namespace std;

int main()
{

	vector<unsigned char> program;
	char c;

	cout << "コードを入力してください（#で終了）\n";

	while (cin.get(c) && c != '#')
	{
		program.push_back(static_cast<unsigned char>(c));
	}

	unsigned char A = 0;
	int B = 0;
	size_t pc = 0;

	while (pc < program.size())
	{

		if (program[pc] == 'A')
		{

			biga(A);
			pc += 1;
		}

		else if (program[pc] == 'B')
		{

			if (pc + 1 < program.size())
			{
				bigb(A, program[pc + 1]);
				pc += 2;
			}
			else
				break;
		}

		else if (program[pc] == 'C')
		{
			bigc(B, program[pc + 1]);
			pc += 2;
		}

		else if (program[pc] == 'D')
		{
			bigd(B, program[pc + 1]);
			pc += 2;
		}
		else if (program[pc] == 'E')
		{
			bigd(B, program[pc + 1]);
			pc += 2;
		}
		else if (program[pc] == 'P')
		{
			bigp(program, pc);
		}
		else
		{
			pc++;
		}
	}
}
