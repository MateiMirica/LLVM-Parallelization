void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<47;++i5)
                    a[18+15*i1+31*i2+28*i3+38*i4+28*i5]=a[28+11*i1+24*i2+6*i3+18*i4];
}