void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<19;++i4)
                for (int i5=0; i5<40;++i5)
                    a[33+24*i2+18*i4]=a[49+39*i2+49*i4+27*i5];
}