void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<38;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<37;++i5)
                    a[31+22*i4]=a[13+23*i1+48*i3+48*i4+4*i5];
}