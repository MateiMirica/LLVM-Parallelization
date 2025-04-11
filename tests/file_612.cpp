void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<18;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<8;++i4)
                for (int i5=0; i5<44;++i5)
                    a[11+14*i1+20*i2+25*i4]=a[39+23*i1+27*i2+6*i3+50*i4+29*i5];
}