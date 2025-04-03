void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<27;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<9;++i5)
                    a[30+2*i1+22*i3]=a[11+32*i1+12*i2+43*i3+18*i4+20*i5];
}