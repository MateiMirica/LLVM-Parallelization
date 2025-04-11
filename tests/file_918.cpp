void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<30;++i5)
                    a[32+15*i1+4*i2+14*i3+48*i4+26*i5]=a[41+7*i1+4*i2+34*i3+38*i4];
}