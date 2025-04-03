void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<34;++i5)
                    a[24+14*i1+15*i2+38*i3+40*i4]=a[41+38*i1+45*i2+20*i3+32*i4+50*i5];
}