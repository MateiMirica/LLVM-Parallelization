void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<26;++i5)
                    a[19+35*i1+20*i2+34*i3+48*i4]=a[9+19*i1+27*i2];
}