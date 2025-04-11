void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<31;++i5)
                    a[41+19*i1+17*i2+31*i3+19*i4+29*i5]=a[49+7*i1+14*i3];
}