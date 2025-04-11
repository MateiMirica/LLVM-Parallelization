void func() {
  int a[1000000];
  for (int i1=0; i1<8;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<45;++i3)
            for (int i4=0; i4<33;++i4)
                for (int i5=0; i5<5;++i5)
                    a[8+29*i2+14*i3+37*i4]=a[45+9*i1+14*i2+35*i3+7*i4+18*i5];
}