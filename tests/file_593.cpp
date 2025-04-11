void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<19;++i5)
                    a[43+36*i1+31*i3+32*i4+34*i5]=a[13+29*i1+22*i3];
}