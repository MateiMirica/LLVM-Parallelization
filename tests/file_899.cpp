void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<28;++i5)
                    a[27+29*i1+42*i2+29*i3+43*i4+7*i5]=a[37+4*i1+38*i2+3*i3];
}