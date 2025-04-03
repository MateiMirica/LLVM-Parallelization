void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<30;++i5)
                    a[33+7*i2+10*i3]=a[20+2*i1+17*i2+45*i3+43*i5];
}