void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<12;++i4)
                for (int i5=0; i5<19;++i5)
                    a[37+42*i1+36*i2+50*i3+5*i4+5*i5]=a[18+34*i1+9*i2+45*i3];
}