void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<31;++i5)
                    a[3+14*i2+14*i3+32*i5]=a[32+24*i2+2*i3+6*i4+24*i5];
}