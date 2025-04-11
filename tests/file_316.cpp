void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<5;++i5)
                    a[41+31*i1+39*i2+32*i3+46*i4+29*i5]=a[26+11*i1+3*i2+4*i5];
}