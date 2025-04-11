void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<50;++i5)
                    a[41+35*i1+44*i2+42*i4+30*i5]=a[30+29*i1+44*i3+16*i4+50*i5];
}