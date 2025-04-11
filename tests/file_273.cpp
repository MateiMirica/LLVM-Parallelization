void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<10;++i5)
                    a[13+25*i2+28*i3]=a[19+7*i1+39*i2+49*i3+1*i4+37*i5];
}