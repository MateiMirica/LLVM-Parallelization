void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<6;++i5)
                    a[7+7*i2+4*i3+6*i4]=a[33+6*i1+36*i2+40*i3+47*i4+35*i5];
}