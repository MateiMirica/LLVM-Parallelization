void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<12;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<24;++i5)
                    a[40+16*i1+16*i2+44*i3+35*i4+28*i5]=a[47+50*i1+10*i2+49*i4+4*i5];
}