void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<15;++i5)
                    a[38+26*i1+49*i2+28*i3+18*i4+2*i5]=a[13+7*i2+22*i3+10*i4+14*i5];
}