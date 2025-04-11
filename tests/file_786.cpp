void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<34;++i5)
                    a[43+32*i2+30*i3+17*i4]=a[42+6*i1+38*i2+35*i4+6*i5];
}