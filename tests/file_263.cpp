void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<35;++i5)
                    a[9+45*i1+43*i2+9*i4+48*i5]=a[50+43*i1+7*i2+9*i4+6*i5];
}