void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<34;++i5)
                    a[15+27*i2+37*i3]=a[5+38*i1+31*i2+46*i3+23*i4+43*i5];
}