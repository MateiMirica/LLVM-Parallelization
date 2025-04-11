void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<5;++i5)
                    a[2+3*i1+39*i3+11*i4]=a[27+30*i1+20*i2+41*i3+36*i4+27*i5];
}