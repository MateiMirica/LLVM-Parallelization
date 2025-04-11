void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<7;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<25;++i5)
                    a[30+46*i1+44*i4]=a[19+36*i2+32*i3+26*i5];
}