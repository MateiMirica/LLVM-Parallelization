void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<45;++i5)
                    a[31+28*i1+37*i4]=a[18+7*i1+35*i4];
}