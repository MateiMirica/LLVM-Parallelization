void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<27;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<19;++i5)
                    a[33+43*i1+8*i2+5*i4+16*i5]=a[30+1*i1+2*i3+41*i4];
}