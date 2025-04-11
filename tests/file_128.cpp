void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<43;++i5)
                    a[11+19*i1+38*i2+5*i4+48*i5]=a[5+18*i1+23*i2+2*i4];
}