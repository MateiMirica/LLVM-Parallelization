void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<21;++i5)
                    a[32+37*i1+38*i2+35*i3+33*i4+14*i5]=a[1+32*i1+24*i2+8*i3+28*i4];
}