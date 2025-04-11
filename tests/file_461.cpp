void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<19;++i5)
                    a[39+40*i1+47*i2+36*i3+27*i4+47*i5]=a[33+15*i1+27*i2+17*i4];
}