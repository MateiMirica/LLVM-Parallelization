void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<35;++i4)
                for (int i5=0; i5<30;++i5)
                    a[41+39*i1+19*i2+38*i3+26*i4+29*i5]=a[23+23*i1+6*i4];
}