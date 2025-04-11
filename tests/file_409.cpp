void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<13;++i5)
                    a[21+15*i2+27*i3]=a[10+15*i1+40*i2+39*i3+35*i5];
}