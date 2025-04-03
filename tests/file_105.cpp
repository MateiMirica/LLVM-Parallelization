void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<23;++i5)
                    a[18+38*i1+41*i2+36*i3+19*i4+8*i5]=a[3+18*i2+29*i3+15*i4];
}