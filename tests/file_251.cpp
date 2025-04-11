void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<16;++i5)
                    a[33+44*i1+5*i2+23*i3+20*i4+49*i5]=a[8+5*i1+10*i4];
}