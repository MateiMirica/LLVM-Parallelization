void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<26;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<36;++i5)
                    a[13+16*i1+35*i3+25*i4]=a[27+4*i1+30*i2+5*i3+1*i4+27*i5];
}