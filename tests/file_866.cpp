void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<9;++i5)
                    a[9+36*i1+11*i2+35*i3]=a[28+36*i1+28*i2+36*i3+23*i4+10*i5];
}