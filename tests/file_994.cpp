void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<31;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<7;++i5)
                    a[13+22*i3+27*i4+5*i5]=a[45+13*i1+2*i2+37*i3+37*i4+42*i5];
}