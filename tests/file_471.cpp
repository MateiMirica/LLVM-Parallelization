void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<32;++i4)
                for (int i5=0; i5<36;++i5)
                    a[34+15*i2+38*i4]=a[42+23*i1+22*i2+42*i3+48*i4+35*i5];
}