void func() {
  int a[1000000];
  for (int i1=0; i1<49;++i1)
    for (int i2=0; i2<44;++i2)
        for (int i3=0; i3<30;++i3)
            for (int i4=0; i4<26;++i4)
                for (int i5=0; i5<21;++i5)
                    a[7+13*i1]=a[42+22*i1+34*i2+7*i3+7*i4+12*i5];
}