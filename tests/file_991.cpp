void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<7;++i5)
                    a[41+10*i1+29*i2+34*i3]=a[1+17*i5];
}