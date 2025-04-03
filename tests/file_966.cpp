void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<31;++i4)
                for (int i5=0; i5<14;++i5)
                    a[5+42*i1+42*i2+47*i3+46*i4+26*i5]=a[12+20*i1+2*i2+43*i3+42*i4+20*i5];
}