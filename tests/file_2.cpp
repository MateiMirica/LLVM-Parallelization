void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<31;++i5)
                    a[7+24*i1+26*i3]=a[14+28*i1+48*i2+24*i3+27*i4+14*i5];
}