void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<42;++i5)
                    a[12+35*i1+35*i2+28*i3+29*i4+44*i5]=a[47+1*i1+35*i2+19*i4+48*i5];
}