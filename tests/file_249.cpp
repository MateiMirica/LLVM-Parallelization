void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<5;++i5)
                    a[16+48*i1+41*i2+27*i3+24*i4+15*i5]=a[28+16*i1+8*i2+12*i3+24*i4];
}