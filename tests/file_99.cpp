void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<37;++i5)
                    a[24+38*i1+6*i4+8*i5]=a[49+6*i1+30*i2+18*i4+16*i5];
}