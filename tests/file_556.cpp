void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<18;++i5)
                    a[33+27*i1+40*i2+35*i3+47*i4]=a[48+19*i1];
}