void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<43;++i5)
                    a[29+45*i1+18*i2+15*i3+26*i4]=a[13+6*i3+17*i4+48*i5];
}