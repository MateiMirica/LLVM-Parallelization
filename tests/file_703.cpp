void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<24;++i5)
                    a[18+39*i2+46*i3+21*i4+40*i5]=a[29+23*i2+13*i4+24*i5];
}