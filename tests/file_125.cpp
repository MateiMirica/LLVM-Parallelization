void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<19;++i4)
                for (int i5=0; i5<14;++i5)
                    a[19+28*i1+12*i2+24*i3+2*i5]=a[49+47*i1+14*i2+26*i3+23*i4+43*i5];
}