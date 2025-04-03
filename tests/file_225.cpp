void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<40;++i5)
                    a[9+33*i1+44*i2+48*i5]=a[6+35*i1+2*i2+22*i5];
}