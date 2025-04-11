void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<18;++i5)
                    a[8+28*i1+12*i4+26*i5]=a[33+4*i1+50*i2+50*i4+46*i5];
}