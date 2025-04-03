void func() {
  int a[1000000];
  for (int i1=0; i1<9;++i1)
    for (int i2=0; i2<49;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<25;++i5)
                    a[43+10*i1+27*i3]=a[49+12*i1+6*i2+27*i3+24*i4+31*i5];
}