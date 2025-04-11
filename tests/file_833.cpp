void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<33;++i5)
                    a[9+25*i2+2*i3+5*i4]=a[47+22*i1+33*i2+35*i3+14*i4+47*i5];
}