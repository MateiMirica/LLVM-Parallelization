void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<47;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<47;++i5)
                    a[14+30*i1+44*i5]=a[33+2*i1+50*i2+16*i3+8*i5];
}