void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<40;++i5)
                    a[23+12*i1+35*i2+8*i3+39*i4+8*i5]=a[28+2*i1+31*i2+36*i3+13*i4];
}