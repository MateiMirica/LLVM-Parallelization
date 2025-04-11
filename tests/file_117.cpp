void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<25;++i5)
                    a[45+21*i2+33*i3]=a[17+47*i1+47*i2+41*i3+30*i4+44*i5];
}