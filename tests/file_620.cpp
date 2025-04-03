void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<19;++i5)
                    a[35+19*i1+1*i2+33*i3+39*i4]=a[46+29*i1+47*i2+25*i3+33*i4];
}