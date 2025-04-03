void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<21;++i5)
                    a[10+40*i1+37*i2+43*i3+19*i4+39*i5]=a[15+32*i1+20*i2+40*i3];
}