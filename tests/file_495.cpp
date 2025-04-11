void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<33;++i3)
            for (int i4=0; i4<37;++i4)
                for (int i5=0; i5<35;++i5)
                    a[39+4*i1+2*i2+16*i4]=a[26+28*i2+50*i4];
}