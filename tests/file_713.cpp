void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<50;++i5)
                    a[46+18*i1+2*i2+29*i3+44*i4]=a[33+10*i1+2*i2+25*i3+19*i4];
}