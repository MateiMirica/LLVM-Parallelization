void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<28;++i5)
                    a[30+2*i2+14*i3+33*i4+6*i5]=a[15+12*i1+49*i4];
}