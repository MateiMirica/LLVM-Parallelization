void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<17;++i5)
                    a[10+1*i1+35*i2+26*i3+25*i4+34*i5]=a[31+31*i1+37*i2+26*i3+37*i4+46*i5];
}