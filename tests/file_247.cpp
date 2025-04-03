void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<17;++i4)
                for (int i5=0; i5<38;++i5)
                    a[23+4*i1+21*i2+10*i3+11*i4]=a[43+42*i1+29*i2+34*i3+34*i4+15*i5];
}