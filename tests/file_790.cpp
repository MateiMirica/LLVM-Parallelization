void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<34;++i5)
                    a[24+10*i2+30*i5]=a[39+48*i1+18*i2+36*i5];
}