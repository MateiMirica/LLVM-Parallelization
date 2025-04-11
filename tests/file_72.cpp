void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<26;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<38;++i5)
                    a[9+1*i1+7*i2+28*i3]=a[33+38*i1+28*i2+33*i3+10*i4+48*i5];
}