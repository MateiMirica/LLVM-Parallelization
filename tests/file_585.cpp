void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<14;++i2)
        for (int i3=0; i3<35;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<6;++i5)
                    a[45+1*i2+37*i3+4*i4]=a[43+42*i1+42*i2+42*i3+48*i4+26*i5];
}