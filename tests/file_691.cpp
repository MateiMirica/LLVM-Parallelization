void func() {
  int a[1000000];
  for (int i1=0; i1<21;++i1)
    for (int i2=0; i2<22;++i2)
        for (int i3=0; i3<46;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<7;++i5)
                    a[34+7*i1+45*i2+18*i4+46*i5]=a[29+33*i1+49*i2+38*i3+28*i5];
}