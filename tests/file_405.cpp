void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<6;++i5)
                    a[36+44*i1+31*i2+33*i3+31*i4+26*i5]=a[34+37*i1+12*i2+24*i3+12*i4];
}