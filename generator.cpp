#include <iostream>
#include <cstdio>
#include <random>
#include <string>
#include <map>
#include <set>

using namespace std;

int main() {

    for (int file_num = 1; file_num <= 1000; ++file_num) {
//        printf("%d\n", file_num);
        string filename = "../tests/file_" + to_string(file_num) + ".cpp";
        freopen(filename.c_str(), "w", stdout);
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(5, 50);
        std::uniform_int_distribution<> distr2(1, 50);
        std::uniform_int_distribution<> distr3(0, 3);
        std::uniform_int_distribution<> distr4(0, 6);

        while (true) {
            int ub1 = distr(gen);
            int ub2 = distr(gen);
            int ub3 = distr(gen);
            int ub4 = distr(gen);
            int ub5 = distr(gen);

            int f1 = distr2(gen), f2 = distr2(gen);
            string s1 = to_string(f1);
            string s2 = to_string(f2);
            vector<int>coef1,coef2;
            for (int i = 1; i <= 5; ++i) {
                int c = 0;
                if (i < 5) {
                    if (distr3(gen) > 0) {
                        c = distr2(gen);
                        string coef = to_string(c);
                        s1 += "+" + coef + "*i" + to_string(i);
                    }
                } else {
                    if (distr4(gen) > 0) {
                        c = distr2(gen);
                        string coef = to_string(c);
                        s1 += "+" + coef + "*i" + to_string(i);
                    }
                }
                coef1.push_back(c);
            }
            for (int i = 1; i <= 5; ++i) {
                int c = 0;
                if (i < 5) {
                    if (distr3(gen) > 0) {
                        c = distr2(gen);
                        string coef = to_string(c);
                        s2 += "+" + coef + "*i" + to_string(i);
                    }
                } else {
                    if (distr4(gen) > 0) {
                        c = distr2(gen);
                        string coef = to_string(c);
                        s2 += "+" + coef + "*i" + to_string(i);
                    }
                }
                coef2.push_back(c);
            }
//            f1=5;f2=0;
//            coef1=coef2={0,0,0,0,0};
            bool safe = true;
            for (int i1 = 0; i1 < ub1 && safe; ++i1) {
                for (int i2 = 0; i2 < ub2 && safe; ++i2) {
                    for (int i3 = 0; i3 < ub3 && safe; ++i3) {
                        for (int i4 = 0; i4 < ub4 && safe; ++i4) {
                            set<int>v1;
                            for (int i5 = 0; i5 < ub5; ++i5) {
                                int val = f1 + i1 * coef1[0] + i2 * coef1[1] + i3 * coef1[2] + i4 * coef1[3] + i5 * coef1[4];
                                v1.insert(val);
                            }
                            for (int i5 = 0; i5 < ub5 && safe; ++i5) {
                                int val = f2 + i1 * coef2[0] + i2 * coef2[1] + i3 * coef2[2] + i4 * coef2[3] + i5 * coef2[4];
                                if (v1.find(val) != v1.end()) {
                                    safe = false;
                                }
                            }
                        }
                    }
                }
            }

            if (!safe)
                continue;


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
            break;
        }
    }
    return 0;
}
