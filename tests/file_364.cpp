void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<34;++i5)
                    a[33+2*i1+4*i2+23*i3]=a[41+4*i1+12*i2+47*i3+40*i4+41*i5];
}