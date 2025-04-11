void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<35;++i4)
                for (int i5=0; i5<47;++i5)
                    a[21+40*i1+22*i2+30*i4+2*i5]=a[12+2*i5];
}