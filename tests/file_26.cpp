void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<9;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<7;++i5)
                    a[26+30*i1+12*i3+30*i5]=a[25+16*i3+4*i4];
}