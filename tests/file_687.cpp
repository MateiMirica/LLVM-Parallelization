void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<25;++i5)
                    a[27+2*i1+6*i2+18*i3+34*i4+42*i5]=a[25+44*i1+34*i4];
}