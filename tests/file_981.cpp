void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<37;++i5)
                    a[5+3*i2]=a[8+30*i2+39*i3+6*i4+27*i5];
}