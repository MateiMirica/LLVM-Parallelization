void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<17;++i4)
                for (int i5=0; i5<20;++i5)
                    a[45+36*i2+26*i3]=a[20+46*i2+24*i4+16*i5];
}