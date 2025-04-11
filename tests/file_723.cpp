void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<25;++i5)
                    a[48+2*i2+2*i4]=a[44+26*i1+11*i2+31*i4+21*i5];
}