void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<38;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<8;++i5)
                    a[41+8*i3+30*i4+38*i5]=a[24+36*i3+12*i4+16*i5];
}