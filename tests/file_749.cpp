void func() {
  int a[1000000];
  for (int i1=0; i1<47;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<49;++i4)
                for (int i5=0; i5<49;++i5)
                    a[49+20*i1+42*i2+36*i4+50*i5]=a[43+10*i1+1*i2+16*i4];
}