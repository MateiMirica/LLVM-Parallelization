void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<16;++i5)
                    a[1+48*i1+20*i2+22*i3+48*i4+26*i5]=a[30+14*i2+14*i4+36*i5];
}