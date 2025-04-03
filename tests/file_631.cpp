void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<42;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<18;++i5)
                    a[16+37*i2+28*i3]=a[45+38*i1+5*i2+24*i3+26*i4+44*i5];
}