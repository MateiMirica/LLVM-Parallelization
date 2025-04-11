void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<42;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<22;++i5)
                    a[40+22*i1+40*i2+35*i3+39*i4+35*i5]=a[1+1*i1+29*i2];
}