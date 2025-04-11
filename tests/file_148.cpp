void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<15;++i5)
                    a[11+33*i2+35*i3+5*i4+46*i5]=a[34+40*i1+15*i2+17*i3+1*i4];
}