void func() {
  int a[1000000];
  for (int i1=0; i1<29;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<15;++i5)
                    a[37+10*i1]=a[48+23*i1+16*i2+49*i4+18*i5];
}