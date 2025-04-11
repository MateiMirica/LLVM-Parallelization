void func() {
  int a[1000000];
  for (int i1=0; i1<45;++i1)
    for (int i2=0; i2<8;++i2)
        for (int i3=0; i3<49;++i3)
            for (int i4=0; i4<10;++i4)
                for (int i5=0; i5<19;++i5)
                    a[43+47*i1+1*i2+19*i5]=a[16+47*i1+1*i2+45*i5];
}