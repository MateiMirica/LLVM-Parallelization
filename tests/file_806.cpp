void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<25;++i5)
                    a[46+9*i3]=a[10+14*i1+46*i2+50*i3+21*i4];
}