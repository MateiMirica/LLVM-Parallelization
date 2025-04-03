void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<32;++i5)
                    a[36+39*i1+20*i3+8*i4]=a[41+48*i1+42*i2+24*i3+45*i4+49*i5];
}