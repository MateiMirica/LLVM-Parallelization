void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<50;++i5)
                    a[50+18*i1+38*i2+31*i3+4*i4+14*i5]=a[43+30*i1+31*i3+28*i4];
}