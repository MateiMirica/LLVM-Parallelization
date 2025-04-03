void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<33;++i5)
                    a[1+3*i1+27*i3+15*i5]=a[29+3*i2+24*i3+24*i4+42*i5];
}