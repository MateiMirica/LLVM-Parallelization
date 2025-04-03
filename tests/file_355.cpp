void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<45;++i5)
                    a[25+48*i1+42*i2+15*i4]=a[34+48*i2+3*i4+24*i5];
}