void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<32;++i5)
                    a[40+38*i1+44*i2+19*i3+48*i4+35*i5]=a[47+16*i1+15*i4];
}