void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<34;++i5)
                    a[16+15*i2]=a[9+18*i1+37*i2+28*i4+25*i5];
}