void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<41;++i5)
                    a[22+29*i1+19*i2+36*i4+6*i5]=a[5+33*i1+31*i2+28*i3+26*i4+36*i5];
}