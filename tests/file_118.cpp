void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<6;++i5)
                    a[24+21*i2]=a[23+39*i4+37*i5];
}