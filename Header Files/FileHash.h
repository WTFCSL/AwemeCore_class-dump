//
//     Generated by private class-dump
//

@interface FileHash : NSObject

+ (id)md5HashOfFileAtPath:(id)arg0;
+ (id)hashOfFileAtPath:(id)arg0 withComputationContext:(struct _FileHashComputationContext { void /* function */ *x0; void /* function */ *x1; void /* function */ *x2; unsigned long long x3; char **x4; } *)arg1;
+ (id)sha1HashOfFileAtPath:(id)arg0;
+ (id)sha512HashOfFileAtPath:(id)arg0;

@end
