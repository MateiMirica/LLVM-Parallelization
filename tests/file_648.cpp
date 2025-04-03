void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<5;++i5)
                    a[25+34*i1+31*i2+34*i3+34*i4+10*i5]=a[6+36*i1+29*i2+50*i5];
}