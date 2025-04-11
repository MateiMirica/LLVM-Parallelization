void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<49;++i3)
            for (int i4=0; i4<6;++i4)
                for (int i5=0; i5<48;++i5)
                    a[41+33*i1+1*i2+38*i3+37*i4+16*i5]=a[21+19*i1+31*i4];
}