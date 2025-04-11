void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<23;++i5)
                    a[23+17*i1+24*i2+39*i4+48*i5]=a[8+9*i1+2*i2+24*i3];
}