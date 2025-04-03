void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<40;++i3)
            for (int i4=0; i4<36;++i4)
                for (int i5=0; i5<24;++i5)
                    a[30+16*i2+8*i5]=a[15+8*i1+22*i4+22*i5];
}