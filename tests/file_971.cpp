void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<15;++i5)
                    a[50+39*i1+35*i2+6*i5]=a[31+32*i2+33*i3+33*i4];
}