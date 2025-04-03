void func() {
  int a[1000000];
  for (int i1=0; i1<35;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<38;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<13;++i5)
                    a[26+46*i1+38*i2+43*i3+40*i4+32*i5]=a[25+4*i1+8*i5];
}