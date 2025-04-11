void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<28;++i5)
                    a[41+4*i1+17*i2+25*i3+36*i4+35*i5]=a[38+5*i3];
}