void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<27;++i5)
                    a[37+8*i2+15*i3+25*i4+15*i5]=a[34+2*i2+4*i4];
}