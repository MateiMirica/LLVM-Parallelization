void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<20;++i5)
                    a[36+19*i2+40*i3+29*i4+4*i5]=a[33+9*i2+21*i4+2*i5];
}