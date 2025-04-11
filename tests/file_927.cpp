void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<38;++i4)
                for (int i5=0; i5<18;++i5)
                    a[3+50*i5]=a[2+26*i1+22*i2+18*i5];
}