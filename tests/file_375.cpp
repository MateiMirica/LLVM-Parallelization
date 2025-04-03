void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<23;++i5)
                    a[5+17*i1+22*i3+48*i4+50*i5]=a[32+17*i1+20*i2+10*i3+6*i4];
}