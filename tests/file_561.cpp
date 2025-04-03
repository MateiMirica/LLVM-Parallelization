void func() {
  int a[1000000];
  for (int i1=0; i1<16;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<47;++i5)
                    a[46+2*i1+7*i3+43*i4+16*i5]=a[5+28*i1+44*i2+27*i3+43*i4+34*i5];
}