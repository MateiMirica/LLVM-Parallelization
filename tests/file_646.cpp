void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<32;++i5)
                    a[24+39*i1+27*i3+4*i4+20*i5]=a[1+43*i1+40*i2+15*i3+38*i4+10*i5];
}