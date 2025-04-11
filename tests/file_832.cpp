void func() {
  int a[1000000];
  for (int i1=0; i1<26;++i1)
    for (int i2=0; i2<28;++i2)
        for (int i3=0; i3<34;++i3)
            for (int i4=0; i4<34;++i4)
                for (int i5=0; i5<20;++i5)
                    a[38+50*i1+15*i2+44*i3+25*i5]=a[23+8*i1];
}