void func() {
  int a[1000000];
  for (int i1=0; i1<18;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<36;++i5)
                    a[42+26*i1+38*i2+29*i3+47*i4+4*i5]=a[45+5*i1+5*i2+25*i4];
}