void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<8;++i5)
                    a[32+4*i1+16*i2+38*i3]=a[36+31*i1+32*i2+42*i3+35*i4+19*i5];
}