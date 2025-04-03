void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<43;++i5)
                    a[29+10*i2+15*i3+44*i4]=a[21+9*i1+41*i2+38*i3+47*i4+43*i5];
}