void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<33;++i5)
                    a[28+6*i1+27*i2+40*i3+32*i4]=a[37+42*i1+47*i2+24*i3+36*i5];
}