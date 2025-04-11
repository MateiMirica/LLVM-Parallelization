void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<18;++i5)
                    a[30+36*i2+33*i4]=a[45+38*i1+48*i2+28*i3+40*i4+31*i5];
}