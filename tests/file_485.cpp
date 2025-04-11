void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<10;++i5)
                    a[44+2*i2+49*i3+50*i4]=a[43+36*i1+10*i2+27*i3+4*i4+20*i5];
}