void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<35;++i5)
                    a[1+4*i2+11*i3]=a[50+24*i1+38*i2+19*i3+9*i4+36*i5];
}