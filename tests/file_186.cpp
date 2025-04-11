void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<30;++i5)
                    a[24+30*i1+49*i3+29*i4+37*i5]=a[8];
}