void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<18;++i5)
                    a[24+27*i1+33*i2+34*i5]=a[42+6*i1+23*i2];
}