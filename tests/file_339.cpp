void func() {
  int a[1000000];
  for (int i1=0; i1<38;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<19;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<6;++i5)
                    a[41+36*i1+23*i3+27*i4+37*i5]=a[10+7*i1+1*i2+11*i3+7*i4];
}