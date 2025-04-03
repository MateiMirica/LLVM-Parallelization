void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<8;++i5)
                    a[24+42*i1+50*i2+47*i3]=a[12+50*i2+15*i3+8*i4];
}