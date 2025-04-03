void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<47;++i5)
                    a[18+27*i1+47*i2+29*i3+22*i4]=a[25+27*i1+14*i2+50*i3+40*i4+15*i5];
}