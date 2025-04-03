void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<26;++i5)
                    a[26+38*i1+49*i2+37*i3+50*i4+5*i5]=a[32+21*i1+41*i2+10*i3];
}