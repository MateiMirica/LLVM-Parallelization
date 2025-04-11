void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<50;++i5)
                    a[31+16*i1+26*i4]=a[50+24*i1+17*i2+39*i3+41*i4+46*i5];
}