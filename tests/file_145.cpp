void func() {
  int a[1000000];
  for (int i1=0; i1<37;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<14;++i4)
                for (int i5=0; i5<39;++i5)
                    a[43+42*i1+33*i3+20*i4]=a[26+26*i1+20*i4];
}