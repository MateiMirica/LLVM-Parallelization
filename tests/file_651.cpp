void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<33;++i5)
                    a[32+36*i1+16*i2+14*i4+28*i5]=a[13+36*i1+40*i3+12*i5];
}