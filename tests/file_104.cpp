void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<31;++i5)
                    a[37+26*i1+28*i2+18*i3+33*i4+7*i5]=a[30+8*i1+11*i2+19*i3];
}