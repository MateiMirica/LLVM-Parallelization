void func() {
  int a[1000000];
  for (int i1=0; i1<50;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<19;++i5)
                    a[39+44*i1+27*i2+10*i3+46*i4+34*i5]=a[30+47*i2+14*i3];
}