void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<13;++i5)
                    a[29+12*i1+26*i2+49*i3+33*i4+39*i5]=a[10+12*i2+18*i3+13*i4+2*i5];
}