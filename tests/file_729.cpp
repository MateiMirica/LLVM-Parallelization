void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<15;++i5)
                    a[28+48*i1+28*i2+5*i3+15*i4+21*i5]=a[23+12*i1+40*i2+5*i3+12*i4+48*i5];
}