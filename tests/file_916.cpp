void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<38;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<22;++i5)
                    a[48+32*i1+34*i2+39*i3+24*i4+46*i5]=a[25+32*i1+48*i2+19*i3];
}