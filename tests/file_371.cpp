void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<32;++i5)
                    a[28+5*i2+48*i3+36*i4]=a[47+21*i2+14*i3+6*i5];
}