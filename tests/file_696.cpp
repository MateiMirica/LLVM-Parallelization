void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<11;++i5)
                    a[50+11*i2+39*i3+37*i4+34*i5]=a[10+3*i2+35*i3+16*i4];
}