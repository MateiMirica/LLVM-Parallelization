void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<15;++i5)
                    a[15+25*i1+14*i2+7*i3]=a[32+31*i1+17*i3+24*i5];
}