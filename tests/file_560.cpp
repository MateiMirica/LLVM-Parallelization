void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<28;++i5)
                    a[44+34*i1+5*i2+32*i3+29*i4+18*i5]=a[47+9*i1+17*i4];
}