void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<33;++i5)
                    a[26+41*i1+36*i2+6*i3+12*i4+16*i5]=a[1+15*i1+48*i2+24*i4+8*i5];
}