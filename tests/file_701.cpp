void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<28;++i5)
                    a[17+48*i1+44*i2+49*i3+25*i4]=a[12+8*i2+12*i3];
}