void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<32;++i5)
                    a[35+10*i1+4*i3+32*i4]=a[29+20*i1+39*i2+15*i3+42*i4+34*i5];
}