void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<23;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<26;++i5)
                    a[17+19*i2+26*i4]=a[16+41*i2+8*i3+34*i4+43*i5];
}