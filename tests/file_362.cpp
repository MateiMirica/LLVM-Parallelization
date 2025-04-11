void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<23;++i5)
                    a[31+32*i1+40*i2+41*i3+20*i4+26*i5]=a[42+21*i2+35*i3];
}