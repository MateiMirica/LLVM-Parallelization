void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<15;++i5)
                    a[10+5*i1+12*i2+38*i5]=a[3+19*i1+6*i2+2*i3+44*i5];
}