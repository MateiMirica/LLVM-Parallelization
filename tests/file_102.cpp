void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<48;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<26;++i5)
                    a[19+32*i2]=a[47+45*i2+18*i3+28*i4+1*i5];
}