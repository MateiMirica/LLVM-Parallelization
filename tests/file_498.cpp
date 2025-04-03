void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<19;++i5)
                    a[22+8*i1+47*i2+5*i3+31*i4+36*i5]=a[35+47*i1+32*i2+29*i3+46*i4+24*i5];
}