void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<7;++i5)
                    a[9+6*i1+28*i2+6*i3+5*i4]=a[44+38*i1+10*i2+12*i3+50*i4+11*i5];
}