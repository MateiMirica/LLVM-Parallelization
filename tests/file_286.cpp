void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<34;++i5)
                    a[31+25*i2+30*i3+8*i4]=a[44+50*i2+39*i3+38*i4+16*i5];
}