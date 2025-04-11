void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<7;++i5)
                    a[10+43*i1+19*i4+46*i5]=a[41+9*i1+8*i3+9*i4+44*i5];
}