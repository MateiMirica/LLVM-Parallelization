void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<17;++i4)
                for (int i5=0; i5<22;++i5)
                    a[47+45*i1+33*i2+25*i3+33*i4+6*i5]=a[35+15*i1+7*i3+29*i4];
}