void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<5;++i5)
                    a[23+49*i1+20*i3+8*i5]=a[30+3*i1+4*i3+12*i5];
}