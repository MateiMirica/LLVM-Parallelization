void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<43;++i5)
                    a[22+23*i1+33*i2+9*i4+36*i5]=a[38+44*i1+33*i4+36*i5];
}