
#include <iostream>
#include <fstream>

using namespace std;

string read_file(char* filename) {
  ifstream file(filename);
  string res;
  while (getline(file, res)) {

  }
}

#define PP_FILE_BEGIN(outname) \
  int main() { \
    ofstream outfile(outname); \
    string line;
#define PP_FILE_END() }
#define PP_FILE2(i, filename) \
  ifstream file ## i(filename); \
  while (getline(file ## i, line)) { \
    outfile << line << endl; \
  }
#define PP_FILE1(f, i, filename) f(i, filename)
#define PP_FILE(filename) PP_FILE1(PP_FILE2, __COUNTER__, filename)

// DSL

PP_FILE_BEGIN("cmacro.cpp")

PP_FILE("pp_basic.cpp")
PP_FILE("pp_shortnames.cpp")
PP_FILE("pp_rep.cpp")
PP_FILE("pp_debug.cpp")
PP_FILE("pp_unionfind.cpp")
PP_FILE("tp_math.cpp")

PP_FILE_END()
