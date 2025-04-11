void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<42;++i5)
                    a[32+16*i1+36*i3]=a[2+34*i1+11*i2+43*i3+24*i4+14*i5];
}