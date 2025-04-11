void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<25;++i5)
                    a[2+28*i1+28*i3+5*i4]=a[9+49*i1+48*i2+36*i3+34*i4];
}