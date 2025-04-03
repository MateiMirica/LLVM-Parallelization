void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<17;++i4)
                for (int i5=0; i5<28;++i5)
                    a[44+39*i1+43*i2+24*i3+40*i4+6*i5]=a[16+37*i1+13*i2+19*i3+39*i4];
}