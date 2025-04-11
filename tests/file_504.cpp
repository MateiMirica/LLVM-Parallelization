void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<6;++i5)
                    a[18+7*i1+19*i4]=a[50+2*i1+35*i2+38*i3+30*i4];
}