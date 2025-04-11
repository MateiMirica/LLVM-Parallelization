void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<27;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<29;++i5)
                    a[25+43*i1+8*i2+12*i3+32*i4+41*i5]=a[34+15*i4];
}