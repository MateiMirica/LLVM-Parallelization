void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<37;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<37;++i5)
                    a[25+8*i1+12*i2+7*i3+20*i5]=a[8+22*i1+26*i2+33*i3+50*i4+36*i5];
}