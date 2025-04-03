void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<43;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<16;++i5)
                    a[44+10*i3+26*i4]=a[37+42*i1+24*i2+44*i3+10*i4+8*i5];
}