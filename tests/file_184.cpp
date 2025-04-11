void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<12;++i5)
                    a[15+39*i1+33*i2+36*i3+38*i4+48*i5]=a[6+13*i1+23*i2+19*i3+27*i4];
}