void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<28;++i5)
                    a[6+14*i1+15*i2+28*i3+12*i4+27*i5]=a[22+2*i4];
}