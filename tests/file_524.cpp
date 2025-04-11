void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<25;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<22;++i5)
                    a[25+24*i2+25*i3+25*i4]=a[29+49*i1+29*i2+42*i3+30*i4+12*i5];
}