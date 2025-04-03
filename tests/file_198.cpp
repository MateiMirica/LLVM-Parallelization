void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<47;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<30;++i5)
                    a[32+44*i1+21*i2+35*i3+30*i4]=a[18+3*i1+18*i2];
}