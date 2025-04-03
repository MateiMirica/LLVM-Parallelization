void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<48;++i5)
                    a[23+44*i1+30*i2+5*i3+23*i4+15*i5]=a[3+14*i1+31*i2+2*i4];
}