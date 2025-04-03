void func() {
  int a[1000000];
  for (int i1=0; i1<14;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<9;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<34;++i5)
                    a[8+50*i2+37*i3+11*i5]=a[28];
}