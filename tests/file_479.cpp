void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<40;++i4)
                for (int i5=0; i5<33;++i5)
                    a[3+41*i2]=a[9+45*i2+37*i3+19*i4+9*i5];
}