void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<47;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<7;++i5)
                    a[11+12*i2+15*i3+2*i4]=a[1+43*i1+33*i2+47*i3+49*i4+3*i5];
}