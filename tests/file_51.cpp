void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<41;++i5)
                    a[26+22*i1+5*i2+4*i3]=a[24+38*i1+24*i2+36*i3+35*i4+17*i5];
}