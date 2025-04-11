void func() {
  int a[1000000];
  for (int i1=0; i1<31;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<45;++i4)
                for (int i5=0; i5<10;++i5)
                    a[18+32*i1+3*i4+1*i5]=a[45+48*i1+10*i2+27*i3+15*i4+49*i5];
}