void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<35;++i4)
                for (int i5=0; i5<20;++i5)
                    a[23+29*i2+42*i3+43*i4+4*i5]=a[14+26*i2+2*i3+22*i4];
}