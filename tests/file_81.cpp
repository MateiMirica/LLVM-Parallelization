void func() {
  int a[1000000];
  for (int i1=0; i1<44;++i1)
    for (int i2=0; i2<15;++i2)
        for (int i3=0; i3<29;++i3)
            for (int i4=0; i4<28;++i4)
                for (int i5=0; i5<7;++i5)
                    a[23+17*i1+46*i2+15*i3+50*i5]=a[36+1*i1+9*i3+32*i4];
}