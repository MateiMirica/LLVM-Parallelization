void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<49;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<25;++i5)
                    a[24+39*i1+23*i2+38*i4]=a[50+49*i1+13*i2+48*i4+30*i5];
}