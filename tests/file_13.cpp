void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<37;++i5)
                    a[18+16*i1+47*i3+49*i4]=a[11+45*i3+24*i4];
}