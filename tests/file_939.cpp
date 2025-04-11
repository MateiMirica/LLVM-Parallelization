void func() {
  int a[1000000];
  for (int i1=0; i1<7;++i1)
    for (int i2=0; i2<33;++i2)
        for (int i3=0; i3<7;++i3)
            for (int i4=0; i4<43;++i4)
                for (int i5=0; i5<19;++i5)
                    a[34+50*i1+2*i2+25*i4+21*i5]=a[2+2*i1];
}