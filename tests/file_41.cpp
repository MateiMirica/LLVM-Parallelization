void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<35;++i4)
                for (int i5=0; i5<46;++i5)
                    a[2+9*i2+3*i3+3*i4+4*i5]=a[1+24*i1+11*i2+17*i3+21*i4+32*i5];
}