void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<25;++i5)
                    a[43+6*i1+26*i2+10*i3+29*i4+16*i5]=a[18+14*i2+9*i3+18*i4];
}