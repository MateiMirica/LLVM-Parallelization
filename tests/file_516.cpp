void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<10;++i5)
                    a[32+42*i2+36*i3+47*i4]=a[12+6*i1+25*i2];
}