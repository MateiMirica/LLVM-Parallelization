void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<16;++i5)
                    a[27+32*i1+16*i2+3*i4]=a[23+39*i1+19*i2+24*i3+20*i4+38*i5];
}