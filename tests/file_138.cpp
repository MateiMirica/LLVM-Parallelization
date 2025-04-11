void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<47;++i5)
                    a[2+10*i3+31*i4]=a[16+47*i2+19*i3+38*i4+40*i5];
}