void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<12;++i5)
                    a[18+24*i1+29*i2+46*i3+40*i5]=a[11+40*i1+9*i2];
}