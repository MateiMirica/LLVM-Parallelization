void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<45;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<20;++i5)
                    a[49+18*i1+24*i2+11*i3+18*i4+46*i5]=a[20+16*i1+43*i3+42*i5];
}