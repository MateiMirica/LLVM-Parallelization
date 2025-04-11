void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<38;++i5)
                    a[11+14*i1+3*i2+24*i3]=a[49+50*i1+27*i2+42*i3+49*i4+15*i5];
}