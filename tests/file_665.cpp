void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<29;++i5)
                    a[11+21*i1+19*i2+42*i4+48*i5]=a[24+11*i1+49*i2+40*i3+12*i4+28*i5];
}