void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<14;++i5)
                    a[30+11*i1+41*i2+49*i3+39*i4+31*i5]=a[18+7*i2+19*i3+30*i4];
}