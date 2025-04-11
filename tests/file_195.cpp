void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<28;++i5)
                    a[39+1*i1+36*i3+4*i4+18*i5]=a[48+17*i1+2*i2+6*i3+48*i4+12*i5];
}