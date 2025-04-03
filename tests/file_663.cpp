void func() {
  int a[1000000];
  for (int i1=0; i1<24;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<18;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<7;++i5)
                    a[27+45*i1+4*i2+16*i3+37*i4+28*i5]=a[4+18*i4+8*i5];
}