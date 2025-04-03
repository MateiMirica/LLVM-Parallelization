void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<42;++i5)
                    a[47+31*i1+23*i2+39*i3+23*i4+20*i5]=a[14+7*i1+32*i3];
}