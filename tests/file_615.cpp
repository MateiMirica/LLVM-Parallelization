void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<8;++i5)
                    a[32+50*i1+29*i2+21*i3+29*i4+25*i5]=a[30+4*i2+8*i3+6*i5];
}