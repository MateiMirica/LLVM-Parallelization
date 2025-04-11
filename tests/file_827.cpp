void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<24;++i5)
                    a[40+2*i1+11*i2]=a[22+44*i1+41*i2+44*i4+32*i5];
}