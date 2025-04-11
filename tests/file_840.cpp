void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<28;++i5)
                    a[32+36*i1+36*i2+15*i3+50*i4]=a[44+19*i1+11*i4];
}