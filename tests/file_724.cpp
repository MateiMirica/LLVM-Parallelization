void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<8;++i5)
                    a[19+35*i1+11*i2+16*i3+14*i4+20*i5]=a[1+7*i3];
}