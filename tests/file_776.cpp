void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<8;++i5)
                    a[18+4*i1+9*i2+7*i4]=a[28+4*i1+29*i2+32*i3+16*i4+28*i5];
}