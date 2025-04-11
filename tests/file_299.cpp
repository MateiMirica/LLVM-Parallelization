void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<47;++i2)
        for (int i3=0; i3<24;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<29;++i5)
                    a[17+25*i1+11*i2+34*i4+40*i5]=a[7+16*i1+2*i2+6*i4];
}