void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<17;++i4)
                for (int i5=0; i5<18;++i5)
                    a[18+6*i1+50*i2+33*i3+4*i5]=a[35+48*i1+8*i2+41*i3+42*i4+18*i5];
}