void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<36;++i5)
                    a[17+14*i1+18*i2]=a[34];
}