void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<27;++i5)
                    a[33+18*i1+32*i2+8*i4+50*i5]=a[50+36*i1+44*i3+28*i4+6*i5];
}