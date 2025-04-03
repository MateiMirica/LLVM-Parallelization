void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<10;++i5)
                    a[15+8*i1+23*i2+22*i5]=a[38+41*i2+50*i3+42*i4+48*i5];
}