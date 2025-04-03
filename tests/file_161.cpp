void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<6;++i5)
                    a[36+15*i1+29*i2+4*i3+22*i5]=a[1+5*i1+39*i2+24*i3+6*i4+22*i5];
}