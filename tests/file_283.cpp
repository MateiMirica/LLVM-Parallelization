void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<27;++i5)
                    a[12+36*i1+20*i2+9*i3]=a[7+12*i2+7*i3+14*i4+36*i5];
}