void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<35;++i5)
                    a[45+32*i1+30*i2+42*i3+4*i4+35*i5]=a[15+23*i2+28*i3];
}