void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<6;++i5)
                    a[46+20*i1+50*i2+18*i3+40*i5]=a[7+28*i1+24*i2+34*i4+44*i5];
}