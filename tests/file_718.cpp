void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<12;++i5)
                    a[46+15*i1+46*i2+49*i4+50*i5]=a[49+12*i4+1*i5];
}