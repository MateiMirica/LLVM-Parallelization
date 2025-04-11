void func() {
  int a[1000000];
  for (int i1=0; i1<32;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<15;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<49;++i5)
                    a[34+37*i3+8*i5]=a[25+20*i1+36*i2+49*i3+50*i4];
}