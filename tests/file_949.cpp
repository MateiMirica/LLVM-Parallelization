void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<15;++i5)
                    a[11+5*i1+43*i2+48*i3+46*i4+30*i5]=a[37+29*i2+34*i3+13*i4];
}