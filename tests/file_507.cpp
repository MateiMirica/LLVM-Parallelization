void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<17;++i2)
        for (int i3=0; i3<5;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<39;++i5)
                    a[17+21*i2+10*i3+2*i4+3*i5]=a[3+8*i2+9*i3];
}