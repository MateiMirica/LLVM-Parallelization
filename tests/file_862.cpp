void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<33;++i5)
                    a[39+27*i1+41*i2+7*i3+22*i5]=a[50+39*i1+21*i2+3*i3+2*i4];
}