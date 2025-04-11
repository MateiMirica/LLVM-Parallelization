void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<5;++i5)
                    a[44+49*i2+9*i3+36*i4+50*i5]=a[19+50*i1+33*i2+29*i3];
}