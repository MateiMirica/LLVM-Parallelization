void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<35;++i5)
                    a[8+8*i3+22*i4]=a[19+47*i1+7*i2+14*i3+37*i4+12*i5];
}