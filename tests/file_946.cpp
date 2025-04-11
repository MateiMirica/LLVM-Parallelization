void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<31;++i5)
                    a[17+11*i1]=a[27+46*i1+19*i2+46*i3+47*i4+47*i5];
}