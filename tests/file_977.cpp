void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<44;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<35;++i5)
                    a[27+13*i1+42*i3+33*i4+24*i5]=a[44+10*i1+4*i4];
}