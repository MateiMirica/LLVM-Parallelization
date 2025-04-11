void func() {
  int a[1000000];
  for (int i1=0; i1<23;++i1)
    for (int i2=0; i2<5;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<20;++i4)
                for (int i5=0; i5<5;++i5)
                    a[30+4*i1+46*i4+44*i5]=a[29+40*i1+46*i2+42*i3+48*i4+28*i5];
}