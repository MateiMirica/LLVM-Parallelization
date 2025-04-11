void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<19;++i4)
                for (int i5=0; i5<47;++i5)
                    a[17+47*i1+12*i2+32*i3+36*i4+4*i5]=a[2+46*i1+29*i3+13*i4];
}