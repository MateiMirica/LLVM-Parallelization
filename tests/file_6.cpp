void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<25;++i5)
                    a[28+15*i1+21*i2+17*i4+36*i5]=a[47+36*i2+23*i4+45*i5];
}