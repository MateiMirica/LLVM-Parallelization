void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<5;++i5)
                    a[48+26*i1+16*i2+9*i3+9*i5]=a[46+29*i1+31*i2+15*i3+39*i4+27*i5];
}