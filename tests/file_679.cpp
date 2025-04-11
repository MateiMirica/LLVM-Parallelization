void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<9;++i5)
                    a[3+2*i5]=a[8+4*i1+27*i2+24*i4+42*i5];
}