void func() {
  int a[1000000];
  for (int i1=0; i1<22;++i1)
    for (int i2=0; i2<27;++i2)
        for (int i3=0; i3<8;++i3)
            for (int i4=0; i4<39;++i4)
                for (int i5=0; i5<29;++i5)
                    a[50+4*i2+8*i3+44*i4+5*i5]=a[34+1*i3];
}