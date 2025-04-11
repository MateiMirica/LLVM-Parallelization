void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<34;++i5)
                    a[35+35*i1+39*i2+41*i3+40*i4+12*i5]=a[9+8*i1+22*i2+21*i3+3*i4];
}