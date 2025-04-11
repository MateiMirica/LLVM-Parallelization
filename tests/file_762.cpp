void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<11;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<15;++i5)
                    a[21+10*i1+14*i2+12*i3]=a[36+8*i1+2*i2+22*i4+34*i5];
}