void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<34;++i5)
                    a[43+22*i1+22*i2+31*i3+34*i4+44*i5]=a[22+21*i3+1*i4];
}