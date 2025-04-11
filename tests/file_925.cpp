void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<38;++i4)
                for (int i5=0; i5<34;++i5)
                    a[29+8*i1+41*i2+5*i3+13*i4+14*i5]=a[6+28*i1+47*i2+5*i3+45*i4];
}