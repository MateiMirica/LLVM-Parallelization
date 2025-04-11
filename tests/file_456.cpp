void func() {
  int a[1000000];
  for (int i1=0; i1<42;++i1)
    for (int i2=0; i2<41;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<5;++i4)
                for (int i5=0; i5<8;++i5)
                    a[40+2*i1+47*i4+8*i5]=a[20+42*i1+50*i2+16*i3+47*i4+43*i5];
}