void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<12;++i5)
                    a[9+49*i1+15*i2+28*i3+27*i5]=a[14+25*i1+21*i2+4*i3];
}