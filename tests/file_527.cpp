void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<35;++i2)
        for (int i3=0; i3<21;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<46;++i5)
                    a[47+11*i1+7*i2+39*i3+2*i4+48*i5]=a[28+7*i1];
}