void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<7;++i5)
                    a[22+15*i2]=a[48+11*i1+37*i2+26*i4+39*i5];
}