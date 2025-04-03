void func() {
  int a[1000000];
  for (int i1=0; i1<39;++i1)
    for (int i2=0; i2<21;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<50;++i4)
                for (int i5=0; i5<34;++i5)
                    a[30+32*i1+12*i2+42*i4]=a[47+22*i2+36*i4+36*i5];
}