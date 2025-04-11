void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<21;++i5)
                    a[26+46*i1+27*i2+47*i3+33*i4+21*i5]=a[48+27*i1+10*i2+27*i3+15*i4];
}