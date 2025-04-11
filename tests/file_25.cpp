void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<44;++i5)
                    a[13+29*i1+46*i3+41*i4+4*i5]=a[5+7*i1+31*i3+38*i4];
}