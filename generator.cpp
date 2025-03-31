#include <iostream>
#include <cstdio>
#include <random>
#include <string>

using namespace std;

int main() {

    for (int file_num = 1; file_num <= 1000; ++file_num) {
        string filename = "../tests4/file_" + to_string(file_num) + ".cpp";
        freopen(filename.c_str(), "w", stdout);
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(5, 1000);
        std::uniform_int_distribution<> distr2(1, 100);
        std::uniform_int_distribution<> distr3(0, 3);

        int ub1 = distr(gen);
        int ub2 = distr(gen);
        int ub3 = distr(gen);
        int ub4 = distr(gen);
        int ub5 = distr(gen);


        string s1 = to_string(distr2(gen));
        string s2 = to_string(distr2(gen));
        for (int i = 1; i <= 5; ++i) {
            if (distr3(gen) > 0) {
                string coef = to_string(distr2(gen));
                s1 += "+" + coef + "*i" + to_string(i);
            }
        }
        for (int i = 1; i <= 5; ++i) {
            if (distr3(gen) > 0) {
                string coef = to_string(distr2(gen));
                s2 += "+" + coef + "*i" + to_string(i);
            }
        }
        printf("void func() {\n"
               "  int a[1000000];\n"
               "  for (int i1=0; i1<%d;++i1)\n"
               "    for (int i2=0; i2<%d;++i2)\n"
               "        for (int i3=0; i3<%d;++i3)\n"
               "            for (int i4=0; i4<%d;++i4)\n"
               "                for (int i5=0; i5<%d;++i5)\n"
               "                    a[%s]=a[%s];\n"
               "}", ub1, ub2, ub3, ub4, ub5, s1.c_str(), s2.c_str());
        fclose(stdout);
    }
    return 0;
}
