void func() {
  int a[1000000];
  for (int i1=0; i1<15;++i1)
    for (int i2=0; i2<20;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<48;++i4)
                for (int i5=0; i5<22;++i5)
                    a[23+39*i1+16*i2+46*i3+48*i4]=a[39+13*i2+22*i3];
}