void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<5;++i5)
                    a[9+32*i1+3*i3+7*i4]=a[8+34*i1+4*i2+5*i3+46*i4];
}