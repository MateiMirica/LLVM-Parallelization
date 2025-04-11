void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<6;++i5)
                    a[28+24*i1+18*i2+32*i3+30*i5]=a[24+20*i1+17*i3];
}