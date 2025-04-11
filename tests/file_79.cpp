void func() {
  int a[1000000];
  for (int i1=0; i1<27;++i1)
    for (int i2=0; i2<11;++i2)
        for (int i3=0; i3<39;++i3)
            for (int i4=0; i4<38;++i4)
                for (int i5=0; i5<34;++i5)
                    a[25+32*i1+35*i2+26*i4+50*i5]=a[50+1*i1];
}