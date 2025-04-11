void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<26;++i5)
                    a[38+46*i1+40*i3+9*i4+46*i5]=a[25+26*i2+2*i3+21*i4+34*i5];
}