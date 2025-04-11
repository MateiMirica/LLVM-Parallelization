void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<13;++i4)
                for (int i5=0; i5<50;++i5)
                    a[14+8*i2+12*i4]=a[5+10*i1+33*i2+26*i3+19*i4+8*i5];
}