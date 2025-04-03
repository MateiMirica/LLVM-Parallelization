void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<50;++i5)
                    a[44+17*i2+46*i4+18*i5]=a[47+2*i1+15*i2+40*i3+50*i4+36*i5];
}