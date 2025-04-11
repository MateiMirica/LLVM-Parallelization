void func() {
  int a[1000000];
  for (int i1=0; i1<11;++i1)
    for (int i2=0; i2<19;++i2)
        for (int i3=0; i3<14;++i3)
            for (int i4=0; i4<46;++i4)
                for (int i5=0; i5<25;++i5)
                    a[15+2*i1+3*i2]=a[39+37*i2+40*i3+50*i4+22*i5];
}