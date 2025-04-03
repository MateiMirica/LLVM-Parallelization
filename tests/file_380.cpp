void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<30;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<48;++i5)
                    a[46+16*i3+18*i4]=a[32+49*i1+41*i3+26*i4+20*i5];
}