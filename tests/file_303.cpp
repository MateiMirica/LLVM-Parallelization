void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<34;++i5)
                    a[7+49*i1+44*i2+38*i3+47*i4+18*i5]=a[37+9*i1+15*i4];
}