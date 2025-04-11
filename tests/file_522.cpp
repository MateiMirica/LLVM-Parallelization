void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<15;++i4)
                for (int i5=0; i5<39;++i5)
                    a[6+9*i2+36*i5]=a[30+50*i2+18*i5];
}