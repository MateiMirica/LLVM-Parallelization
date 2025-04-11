void func() {
  int a[1000000];
  for (int i1=0; i1<46;++i1)
    for (int i2=0; i2<37;++i2)
        for (int i3=0; i3<25;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<39;++i5)
                    a[21+27*i1+28*i3+25*i4+32*i5]=a[44+9*i1+20*i2+40*i3+33*i4+28*i5];
}