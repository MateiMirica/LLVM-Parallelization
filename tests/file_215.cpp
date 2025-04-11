void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<15;++i5)
                    a[3+16*i1+18*i2+30*i3+44*i4+49*i5]=a[22+21*i3+5*i4];
}