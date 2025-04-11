void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<13;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<40;++i5)
                    a[7+26*i1+3*i2+24*i4+44*i5]=a[15+1*i1];
}