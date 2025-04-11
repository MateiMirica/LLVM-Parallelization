void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<25;++i4)
                for (int i5=0; i5<25;++i5)
                    a[8+10*i2+14*i5]=a[7+26*i3+36*i4+34*i5];
}