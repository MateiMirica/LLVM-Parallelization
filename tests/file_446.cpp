void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<35;++i5)
                    a[46+38*i1+5*i2+27*i3+4*i4+10*i5]=a[41+42*i1+39*i2+35*i3];
}