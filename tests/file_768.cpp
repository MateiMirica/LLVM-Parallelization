void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<24;++i5)
                    a[14+42*i1+29*i2+6*i3+47*i4+40*i5]=a[36+42*i1+37*i2+42*i3+7*i4];
}