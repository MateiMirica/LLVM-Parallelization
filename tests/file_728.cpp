void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<26;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<19;++i4)
                for (int i5=0; i5<41;++i5)
                    a[18+14*i1+21*i3+28*i4+10*i5]=a[21+38*i2+43*i3+20*i4+36*i5];
}