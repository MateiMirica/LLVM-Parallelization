void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<8;++i5)
                    a[41+43*i1+34*i2+28*i3+9*i4+42*i5]=a[12+23*i1+26*i2+21*i4];
}