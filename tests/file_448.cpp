void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<32;++i5)
                    a[35+27*i1+29*i2+15*i3+20*i4+11*i5]=a[10+7*i2];
}