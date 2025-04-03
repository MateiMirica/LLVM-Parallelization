void func() {
  int a[1000000];
  for (int i1=0; i1<43;++i1)
    for (int i2=0; i2<39;++i2)
        for (int i3=0; i3<20;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<39;++i5)
                    a[36+34*i1+48*i2+2*i3+33*i4+8*i5]=a[3+40*i2+8*i3+47*i4+22*i5];
}