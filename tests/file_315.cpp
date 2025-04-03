void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<21;++i5)
                    a[41+28*i1+47*i3+13*i4+14*i5]=a[18+34*i2+25*i3+23*i4];
}