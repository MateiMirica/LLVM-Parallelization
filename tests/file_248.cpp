void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<14;++i5)
                    a[30+21*i1+23*i2+36*i3+34*i5]=a[39+16*i1+19*i3];
}