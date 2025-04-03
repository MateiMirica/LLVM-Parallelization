void func() {
  int a[1000000];
  for (int i1=0; i1<5;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<6;++i3)
            for (int i4=0; i4<9;++i4)
                for (int i5=0; i5<8;++i5)
                    a[34+24*i1+28*i2+11*i3+20*i4+11*i5]=a[48+24*i1+5*i3];
}