void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<10;++i2)
        for (int i3=0; i3<16;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<46;++i5)
                    a[35+8*i1+3*i3]=a[21+44*i1+30*i2+44*i3+20*i4+36*i5];
}