void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<47;++i5)
                    a[32+24*i1+20*i2+38*i5]=a[31+10*i1+6*i2+12*i3+26*i5];
}