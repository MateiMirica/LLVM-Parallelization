void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<30;++i4)
                for (int i5=0; i5<26;++i5)
                    a[10+49*i1+42*i2+27*i3+47*i5]=a[25+11*i1+7*i2+27*i3];
}