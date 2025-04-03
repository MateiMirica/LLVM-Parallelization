void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<36;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<15;++i5)
                    a[11+44*i3+29*i5]=a[20+1*i1+15*i3];
}