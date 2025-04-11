void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<31;++i5)
                    a[2+20*i2+33*i3+7*i4]=a[25+8*i2+37*i3+3*i4];
}