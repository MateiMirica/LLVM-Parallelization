void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<32;++i5)
                    a[47+27*i1+18*i2+44*i3+20*i4+23*i5]=a[16+9*i1+9*i2+24*i3+3*i4];
}