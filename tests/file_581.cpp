void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<49;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<44;++i5)
                    a[13+16*i1+49*i2+26*i3+44*i4+7*i5]=a[18+29*i2];
}