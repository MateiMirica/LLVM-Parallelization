void func() {
  int a[1000000];
  for (int i1=0; i1<13;++i1)
    for (int i2=0; i2<6;++i2)
        for (int i3=0; i3<50;++i3)
            for (int i4=0; i4<21;++i4)
                for (int i5=0; i5<39;++i5)
                    a[33+42*i1+50*i2+18*i3+34*i4]=a[2+28*i1+4*i2+42*i5];
}