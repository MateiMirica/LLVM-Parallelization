void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<37;++i5)
                    a[32+3*i2]=a[42+30*i1+38*i2+10*i3+6*i4+48*i5];
}