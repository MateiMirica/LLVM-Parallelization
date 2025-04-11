void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<5;++i5)
                    a[18+22*i1+33*i2+13*i3+44*i4+26*i5]=a[14+25*i2+7*i4];
}