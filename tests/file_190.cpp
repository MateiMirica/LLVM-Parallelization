void func() {
  int a[1000000];
  for (int i1=0; i1<34;++i1)
    for (int i2=0; i2<23;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<29;++i4)
                for (int i5=0; i5<18;++i5)
                    a[40+8*i4]=a[39+28*i2+21*i3+46*i4+19*i5];
}