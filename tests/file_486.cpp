void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<17;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<17;++i5)
                    a[18+40*i1+21*i2+29*i3+12*i4]=a[13+29*i1+25*i3];
}