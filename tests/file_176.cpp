void func() {
  int a[1000000];
  for (int i1=0; i1<30;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<23;++i4)
                for (int i5=0; i5<45;++i5)
                    a[2+42*i3+16*i5]=a[19+4*i1+36*i4];
}