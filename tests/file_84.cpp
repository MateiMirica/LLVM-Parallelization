void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<44;++i5)
                    a[14+27*i1+31*i2+27*i3+47*i4+28*i5]=a[15+28*i4];
}