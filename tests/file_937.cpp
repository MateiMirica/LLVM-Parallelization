void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<15;++i5)
                    a[33+44*i1+42*i2+46*i3+47*i4+31*i5]=a[24+11*i1+28*i2+21*i4];
}