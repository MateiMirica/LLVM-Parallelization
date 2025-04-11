void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<32;++i5)
                    a[21+9*i2+43*i4+32*i5]=a[32+18*i1+11*i2+15*i4+2*i5];
}