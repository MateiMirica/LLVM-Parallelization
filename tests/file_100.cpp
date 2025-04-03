void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<47;++i5)
                    a[39+2*i1+18*i3+36*i4]=a[44+27*i1+39*i2+47*i3+39*i4+34*i5];
}