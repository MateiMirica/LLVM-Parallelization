void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<21;++i5)
                    a[35+6*i2+21*i3+13*i4+20*i5]=a[34+38*i1+18*i2+15*i3+31*i4+26*i5];
}