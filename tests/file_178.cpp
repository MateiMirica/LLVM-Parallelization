void func() {
  int a[1000000];
  for (int i1=0; i1<6;++i1)
    for (int i2=0; i2<13;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<17;++i5)
                    a[48+35*i2+26*i3+37*i4+41*i5]=a[25+12*i2+2*i3];
}