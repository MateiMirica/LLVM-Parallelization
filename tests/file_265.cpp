void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<5;++i5)
                    a[3+32*i1+8*i2+28*i3+14*i4+42*i5]=a[24+46*i1+50*i2+45*i5];
}