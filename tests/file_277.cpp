void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<25;++i5)
                    a[41+2*i1+18*i2+14*i3+28*i5]=a[30+26*i1+30*i2+28*i5];
}