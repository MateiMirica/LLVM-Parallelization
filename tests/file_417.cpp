void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<26;++i2)
        for (int i3=0; i3<36;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<31;++i5)
                    a[45+39*i1+50*i2+47*i3+36*i4+5*i5]=a[27+9*i2+24*i3];
}