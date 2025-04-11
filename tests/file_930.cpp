void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<43;++i5)
                    a[5+2*i3+31*i4+36*i5]=a[16+48*i1+20*i2+42*i3+39*i4];
}