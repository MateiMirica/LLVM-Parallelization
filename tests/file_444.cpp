void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<44;++i5)
                    a[46+49*i1+36*i2+22*i5]=a[43+29*i1+38*i2+42*i4];
}