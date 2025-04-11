void func() {
  int a[1000000];
  for (int i1=0; i1<36;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<41;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<20;++i5)
                    a[38+2*i1+3*i3]=a[43+10*i1+20*i2+23*i3+2*i5];
}