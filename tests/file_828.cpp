void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<39;++i5)
                    a[20+25*i2+19*i3+42*i5]=a[49+27*i1+10*i2+1*i3+18*i4];
}