void func() {
  int a[1000000];
  for (int i1=0; i1<28;++i1)
    for (int i2=0; i2<24;++i2)
        for (int i3=0; i3<45;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<46;++i5)
                    a[20+25*i2+1*i3]=a[34+41*i1+48*i2+1*i3+4*i4+46*i5];
}