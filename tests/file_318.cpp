void func() {
  int a[1000000];
  for (int i1=0; i1<40;++i1)
    for (int i2=0; i2<26;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<30;++i5)
                    a[42+21*i1+46*i2+28*i3+48*i4+37*i5]=a[39+8*i1+39*i2+17*i3];
}