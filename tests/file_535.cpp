void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<35;++i4)
                for (int i5=0; i5<15;++i5)
                    a[29+10*i1+16*i3+28*i4]=a[30+11*i1+38*i2+24*i3+47*i4+47*i5];
}