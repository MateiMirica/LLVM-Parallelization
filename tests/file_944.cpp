void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<49;++i3)
            for (int i4=0; i4<11;++i4)
                for (int i5=0; i5<46;++i5)
                    a[27+11*i1+8*i2+19*i3+16*i4]=a[24+11*i1+29*i2+49*i3+27*i4+37*i5];
}