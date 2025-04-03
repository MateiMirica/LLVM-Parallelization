void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<30;++i5)
                    a[48+47*i1+28*i2+39*i3+46*i4+17*i5]=a[35+27*i1+5*i2+14*i3+6*i4];
}