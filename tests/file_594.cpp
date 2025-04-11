void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<38;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<25;++i5)
                    a[16+25*i1+26*i2+27*i3+38*i4+17*i5]=a[41+3*i1+8*i3+15*i4];
}