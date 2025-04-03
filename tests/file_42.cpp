void func() {
  int a[1000000];
  for (int i1=0; i1<48;++i1)
    for (int i2=0; i2<29;++i2)
        for (int i3=0; i3<28;++i3)
            for (int i4=0; i4<18;++i4)
                for (int i5=0; i5<20;++i5)
                    a[42+16*i1+40*i3+44*i4+22*i5]=a[43+40*i1+34*i3+42*i5];
}