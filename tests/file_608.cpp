void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<40;++i5)
                    a[45+38*i1+40*i2+2*i3+2*i4]=a[32+38*i1+4*i2+4*i3+40*i5];
}