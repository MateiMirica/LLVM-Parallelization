void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<26;++i2)
        for (int i3=0; i3<10;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<48;++i5)
                    a[1+41*i1+2*i3+12*i4]=a[18+41*i1+48*i3+16*i4+50*i5];
}