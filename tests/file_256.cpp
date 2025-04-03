void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<7;++i5)
                    a[46+10*i1+20*i3+40*i4+34*i5]=a[25+32*i1+48*i3+40*i4+26*i5];
}