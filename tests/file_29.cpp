void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<10;++i5)
                    a[40]=a[41+22*i1+47*i2+11*i3+12*i4+35*i5];
}