void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<6;++i5)
                    a[18+42*i1+47*i2+47*i3+46*i4+17*i5]=a[36+19*i1+30*i2+17*i3+21*i4];
}