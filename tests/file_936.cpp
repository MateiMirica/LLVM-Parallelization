void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<6;++i5)
                    a[44+34*i3+3*i4+26*i5]=a[41+30*i2+3*i4];
}