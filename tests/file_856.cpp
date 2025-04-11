void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<16;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<6;++i5)
                    a[1+50*i1+12*i2+8*i3+38*i4]=a[18+10*i1+2*i2+18*i3+33*i4+35*i5];
}