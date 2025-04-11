void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<50;++i5)
                    a[18+35*i3+13*i4]=a[16+37*i1+19*i2+43*i3+45*i4+29*i5];
}