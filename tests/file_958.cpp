void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<45;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<45;++i5)
                    a[47+35*i1+22*i2+12*i5]=a[14+49*i1+8*i2];
}