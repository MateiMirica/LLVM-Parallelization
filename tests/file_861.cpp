void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<9;++i5)
                    a[4+35*i1]=a[2+47*i1+22*i3+23*i4+9*i5];
}