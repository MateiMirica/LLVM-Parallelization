void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<14;++i5)
                    a[19+10*i1+48*i2+41*i4+18*i5]=a[40+46*i1+46*i3+21*i4+24*i5];
}