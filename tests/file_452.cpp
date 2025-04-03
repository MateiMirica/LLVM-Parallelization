void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<15;++i5)
                    a[32+8*i1+11*i2+22*i3+30*i4+26*i5]=a[15+18*i3+26*i4];
}