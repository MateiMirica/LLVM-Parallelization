void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<11;++i5)
                    a[40+16*i2+20*i3+22*i4+15*i5]=a[46+18*i4];
}