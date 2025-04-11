void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<50;++i2)
        for (int i3=0; i3<31;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<45;++i5)
                    a[24+36*i1+3*i3+6*i4]=a[43+34*i1+1*i3+4*i4+40*i5];
}