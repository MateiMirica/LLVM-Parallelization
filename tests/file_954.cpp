void func() {
  int a[1000000];
  for (int i1=0; i1<20;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<35;++i4)
                for (int i5=0; i5<41;++i5)
                    a[1+23*i1+1*i2+16*i4]=a[16+43*i1+47*i4+49*i5];
}