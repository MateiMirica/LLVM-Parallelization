void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<47;++i2)
        for (int i3=0; i3<22;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<25;++i5)
                    a[10+48*i3+42*i5]=a[25+44*i1+28*i2+20*i3+40*i4+44*i5];
}