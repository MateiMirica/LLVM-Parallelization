void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<32;++i2)
        for (int i3=0; i3<38;++i3)
            for (int i4=0; i4<22;++i4)
                for (int i5=0; i5<46;++i5)
                    a[33+9*i1+45*i5]=a[29+30*i5];
}