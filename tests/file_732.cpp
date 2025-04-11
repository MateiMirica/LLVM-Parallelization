void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<35;++i5)
                    a[31+14*i1+39*i2+33*i4+24*i5]=a[28+22*i1+15*i2+4*i3+43*i4+44*i5];
}