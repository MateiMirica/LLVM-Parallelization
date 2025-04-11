void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<18;++i5)
                    a[28+39*i1+34*i2+35*i3+21*i4]=a[39+7*i2+25*i3];
}