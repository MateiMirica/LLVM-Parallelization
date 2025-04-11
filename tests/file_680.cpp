void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<11;++i5)
                    a[14+15*i1+25*i2+17*i3+23*i4+7*i5]=a[43+6*i1+6*i2+7*i4];
}