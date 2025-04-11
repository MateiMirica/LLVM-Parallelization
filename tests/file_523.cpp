void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<35;++i5)
                    a[24+22*i1+19*i2+12*i4+12*i5]=a[1+8*i1];
}