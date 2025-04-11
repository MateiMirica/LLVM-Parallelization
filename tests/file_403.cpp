void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<42;++i5)
                    a[10+16*i1+39*i2+33*i3]=a[45+6*i1+37*i2+5*i3+6*i5];
}