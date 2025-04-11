void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<17;++i5)
                    a[28+38*i1+47*i2+43*i3+26*i4+38*i5]=a[20+12*i1+30*i2+20*i3+26*i4];
}