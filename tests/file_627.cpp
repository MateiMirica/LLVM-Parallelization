void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<12;++i5)
                    a[1+15*i1+5*i2+27*i3+12*i4]=a[50+20*i1+32*i2+31*i3+21*i4+28*i5];
}