void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<38;++i5)
                    a[4+25*i1+28*i2+14*i3+7*i4+16*i5]=a[5+19*i1+11*i4+6*i5];
}