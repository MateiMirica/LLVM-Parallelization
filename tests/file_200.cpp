void func() {
  int a[1000000];
  for (int i1=0; i1<19;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<20;++i5)
                    a[18+34*i1+47*i2+47*i3+10*i4]=a[12+3*i2+47*i3];
}