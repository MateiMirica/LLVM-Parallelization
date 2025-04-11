void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<42;++i4)
                for (int i5=0; i5<46;++i5)
                    a[30+36*i1+47*i2+41*i3+8*i4+35*i5]=a[34+30*i1+47*i2+10*i3+5*i4];
}