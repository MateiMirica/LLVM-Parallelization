void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<34;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<38;++i5)
                    a[4+38*i1+14*i2+40*i4+36*i5]=a[7+14*i3+18*i5];
}