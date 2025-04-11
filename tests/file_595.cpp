void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<49;++i5)
                    a[9+16*i3+35*i4+21*i5]=a[35+12*i1+30*i2+46*i3+8*i4+48*i5];
}