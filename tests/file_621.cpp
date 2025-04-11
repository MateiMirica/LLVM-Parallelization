void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<38;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<30;++i5)
                    a[37+8*i1+18*i2+10*i4+6*i5]=a[14+2*i2+20*i3+48*i5];
}