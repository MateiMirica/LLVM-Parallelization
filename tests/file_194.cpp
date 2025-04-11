void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<35;++i4)
                for (int i5=0; i5<32;++i5)
                    a[46+9*i1+38*i3+30*i4+6*i5]=a[40+15*i3+6*i4];
}