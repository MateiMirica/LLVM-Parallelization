void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<41;++i5)
                    a[26+31*i1+27*i4]=a[25+36*i1+42*i2+47*i3+45*i4+36*i5];
}