void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<10;++i5)
                    a[25+38*i1+13*i2+27*i3+44*i4]=a[42+29*i1+3*i2+22*i4];
}