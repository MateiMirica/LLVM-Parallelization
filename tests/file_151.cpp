void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<40;++i5)
                    a[20+15*i1+15*i2+39*i3+23*i4+7*i5]=a[42+3*i1+2*i2+8*i3];
}