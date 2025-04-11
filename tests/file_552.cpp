void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<30;++i5)
                    a[24+27*i1+47*i2+38*i3+43*i4+28*i5]=a[18+24*i3+33*i4];
}