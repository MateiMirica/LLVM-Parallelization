void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<43;++i5)
                    a[50+2*i1+45*i2+43*i3+48*i4+48*i5]=a[13+39*i2+27*i3+48*i4+6*i5];
}