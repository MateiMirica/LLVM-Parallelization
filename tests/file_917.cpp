void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<35;++i5)
                    a[46+15*i1+3*i3+8*i4]=a[49+27*i1+29*i3+33*i4+7*i5];
}