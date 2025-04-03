void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<26;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<44;++i5)
                    a[5+36*i1+39*i2+30*i3+38*i4+48*i5]=a[12+30*i1+15*i3+41*i4+21*i5];
}