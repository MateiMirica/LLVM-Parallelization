void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<15;++i5)
                    a[49+30*i2+5*i4+42*i5]=a[15+12*i1+21*i2+15*i3+44*i4+27*i5];
}