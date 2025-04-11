void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<38;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<13;++i5)
                    a[42+8*i1+16*i2+30*i3+45*i4]=a[45+12*i1+12*i2+45*i4+20*i5];
}