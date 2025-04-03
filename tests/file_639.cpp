void func() {
  int a[1000000];
  for (int i1=0; i1<25;++i1)
    for (int i2=0; i2<40;++i2)
        for (int i3=0; i3<45;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<40;++i5)
                    a[44+47*i1+20*i2+11*i3+30*i4]=a[49+37*i1+4*i2+1*i3+2*i4+20*i5];
}