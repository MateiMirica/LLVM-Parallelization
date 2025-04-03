void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<38;++i4)
                for (int i5=0; i5<12;++i5)
                    a[46+41*i1+18*i2+27*i3+23*i4+21*i5]=a[39+29*i1+6*i2+12*i3+5*i4+15*i5];
}