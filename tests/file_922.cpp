void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<33;++i5)
                    a[46+46*i2+18*i3+2*i4+16*i5]=a[49+32*i1+48*i3+12*i4+50*i5];
}