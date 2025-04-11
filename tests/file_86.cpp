void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<15;++i5)
                    a[31+47*i1+19*i3+50*i4+32*i5]=a[13+33*i4];
}