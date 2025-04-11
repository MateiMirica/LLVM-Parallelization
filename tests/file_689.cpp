void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<49;++i5)
                    a[16+36*i1+35*i2+8*i4]=a[49+42*i1+9*i2+44*i5];
}