void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<48;++i5)
                    a[20+5*i1+6*i2+23*i4]=a[17+47*i1+30*i2+50*i4+29*i5];
}