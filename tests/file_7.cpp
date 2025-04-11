void func() {
  int a[1000000];
  for (int i1=0; i1<12;++i1)
    for (int i2=0; i2<48;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<7;++i4)
                for (int i5=0; i5<40;++i5)
                    a[41+1*i1+11*i2+39*i5]=a[1+34*i1+32*i2+18*i3+39*i5];
}