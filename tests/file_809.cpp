void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<33;++i5)
                    a[41+28*i2+8*i3]=a[10+39*i1+44*i2+17*i3+18*i4];
}