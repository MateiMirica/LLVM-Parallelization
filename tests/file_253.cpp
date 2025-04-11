void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<26;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<48;++i5)
                    a[24+2*i1+12*i2+10*i3+18*i5]=a[39+20*i1+30*i3+24*i4+20*i5];
}