void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<18;++i5)
                    a[36+48*i1+45*i2+36*i3+6*i4+22*i5]=a[28+20*i1+45*i2+33*i3];
}