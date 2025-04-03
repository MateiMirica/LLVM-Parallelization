void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<42;++i5)
                    a[48+36*i1+26*i2+27*i3+30*i4+29*i5]=a[24+19*i1];
}