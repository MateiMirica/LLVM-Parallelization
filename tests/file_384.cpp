void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<19;++i5)
                    a[32+36*i1+46*i2+17*i3+23*i4]=a[33+45*i3+27*i4+18*i5];
}