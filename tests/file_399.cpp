void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<18;++i5)
                    a[25+47*i2+5*i3+37*i4+4*i5]=a[40+44*i1+39*i2+1*i3+25*i4+46*i5];
}