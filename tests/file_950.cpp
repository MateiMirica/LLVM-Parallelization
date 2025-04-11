void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<13;++i5)
                    a[18+25*i1+18*i3+19*i4+6*i5]=a[25+46*i1+9*i2+27*i3+46*i4+49*i5];
}