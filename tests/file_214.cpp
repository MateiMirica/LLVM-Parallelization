void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<12;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<25;++i5)
                    a[20+15*i1+20*i2+19*i3+26*i4]=a[13+18*i2+16*i3];
}