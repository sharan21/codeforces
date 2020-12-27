#include <fstream>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

#define max_size 100000

/**************** HELPERS ****************/
#define COUT_THIS(this) std::cout << this << std::endl;
#define COUT_VAR(this) std::cout << #this << ": " << this << std::endl;
#define COUT_POS() COUT_THIS("at " << __FILE__ << ":" << __LINE__)

#define COUT_N_EXIT(msg) \
  COUT_THIS(msg);        \
  COUT_POS();            \
  abort();

#define INVARIANT(cond)            \
  if (!(cond))                     \
  {                                \
    COUT_THIS(#cond << " failed"); \
    COUT_POS();                    \
    abort();                       \
  }
/************ HELPERS DONE ****************/

void solve(fstream *fin)
{
  int n;
  *fin >> n;
}

int main()
{

  fstream fin;
  fin.open("./input.txt", ios::in);

  solve(&fin);
}