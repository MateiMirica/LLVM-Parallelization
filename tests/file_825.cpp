void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<11;++i5)
                    a[12+16*i1+17*i3+25*i4+38*i5]=a[49+40*i2+11*i3+3*i4+48*i5];
}