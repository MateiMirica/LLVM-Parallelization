void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<9;++i5)
                    a[19+47*i1+29*i2+47*i3+25*i4+40*i5]=a[44+17*i1+7*i3+4*i4];
}