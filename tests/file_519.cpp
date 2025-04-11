void func() {
  int a[1000000];
  for (int i1=0; i1<17;++i1)
    for (int i2=0; i2<43;++i2)
        for (int i3=0; i3<47;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<21;++i5)
                    a[12+14*i1+37*i2+24*i4]=a[30+40*i1+44*i2+50*i3+49*i4+42*i5];
}