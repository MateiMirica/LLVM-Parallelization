void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<40;++i5)
                    a[42+5*i1]=a[21+18*i1+22*i2+32*i3+17*i4+30*i5];
}