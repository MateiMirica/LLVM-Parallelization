void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<16;++i4)
                for (int i5=0; i5<37;++i5)
                    a[40+7*i2+9*i4]=a[42+45*i1+49*i2+20*i3+29*i4+46*i5];
}