void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<38;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<28;++i5)
                    a[10+2*i1+6*i2+39*i3+12*i5]=a[7+16*i2+11*i3+34*i4+2*i5];
}