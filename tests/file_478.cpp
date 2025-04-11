void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<47;++i4)
                for (int i5=0; i5<49;++i5)
                    a[46+47*i2+24*i3+39*i5]=a[47+20*i2+12*i5];
}