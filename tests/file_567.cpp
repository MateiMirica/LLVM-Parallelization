void func() {
  int a[1000000];
  for (int i1=0; i1<33;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<14;++i5)
                    a[48+37*i1+10*i2+19*i3+37*i4]=a[14+2*i1+17*i4];
}