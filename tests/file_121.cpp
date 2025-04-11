void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<14;++i5)
                    a[38+17*i1+21*i2+37*i3+27*i4+4*i5]=a[35+7*i2];
}