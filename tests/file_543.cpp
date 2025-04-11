void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<44;++i4)
                for (int i5=0; i5<48;++i5)
                    a[14+19*i2+30*i3+50*i4]=a[7+45*i1+13*i2+26*i4];
}