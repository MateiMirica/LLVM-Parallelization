void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<5;++i5)
                    a[9+28*i1+18*i2+39*i3+35*i4+7*i5]=a[47+38*i1+30*i2+40*i3+42*i4+3*i5];
}