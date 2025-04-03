void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<48;++i5)
                    a[42+45*i1+20*i2+27*i3+37*i4+42*i5]=a[22+28*i1+21*i3+5*i4];
}