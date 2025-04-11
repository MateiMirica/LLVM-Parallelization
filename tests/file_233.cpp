void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<27;++i4)
                for (int i5=0; i5<11;++i5)
                    a[15+39*i2+43*i3+47*i4+30*i5]=a[38+11*i2+8*i3+19*i4];
}