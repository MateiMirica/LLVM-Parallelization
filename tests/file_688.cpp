void func() {
  int a[1000000];
  for (int i1=0; i1<10;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<41;++i4)
                for (int i5=0; i5<31;++i5)
                    a[11+16*i2+9*i5]=a[37+45*i1+16*i2+21*i3+21*i5];
}