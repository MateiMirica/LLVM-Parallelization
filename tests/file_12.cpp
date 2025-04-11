void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<32;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<44;++i5)
                    a[32+11*i1+35*i2+32*i3+50*i4]=a[27+10*i1+30*i2+9*i3];
}