void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<6;++i5)
                    a[34+8*i1+38*i2]=a[19+14*i1+38*i2+16*i3+7*i5];
}