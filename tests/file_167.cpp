void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<16;++i5)
                    a[47+10*i1+50*i3+45*i4+10*i5]=a[44+26*i1+16*i2+38*i3+49*i4+28*i5];
}