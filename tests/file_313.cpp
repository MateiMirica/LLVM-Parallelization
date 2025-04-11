void func() {
  int a[1000000];
  for (int i1=0; i1<41;++i1)
    for (int i2=0; i2<46;++i2)
        for (int i3=0; i3<26;++i3)
            for (int i4=0; i4<24;++i4)
                for (int i5=0; i5<21;++i5)
                    a[11+43*i1+36*i2+43*i3+16*i4]=a[26+7*i1+29*i2+2*i4];
}