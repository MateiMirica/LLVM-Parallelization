void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<5;++i5)
                    a[38+49*i2+24*i3+48*i4]=a[10+27*i2+5*i3+10*i4+39*i5];
}