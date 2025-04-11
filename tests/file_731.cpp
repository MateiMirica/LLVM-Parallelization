void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<7;++i5)
                    a[47+29*i4+24*i5]=a[12+18*i1+12*i2+2*i3+17*i4+8*i5];
}