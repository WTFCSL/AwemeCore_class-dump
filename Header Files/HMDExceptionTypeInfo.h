//
//     Generated by private class-dump
//

@interface HMDExceptionTypeInfo : NSObject {
    BOOL _objcCatchID;
    void *_type_info;
    const char *_name;
    unsigned long long _type;
    Class _objcClass;
}

@property (nonatomic) void *type_info;
@property (nonatomic) const char *name;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL objcCatchID;
@property (retain, nonatomic) Class objcClass;

+ (id)typeInfoWithCatchNativeLSDA:(struct HMDLandingSpecificData { BOOL x0; unsigned int x1; struct { void *x0; char *x1; void *x2; void *x3; } x2; struct { long long x0; char *x1; unsigned char x2; } x3; unsigned long long x4; void *x5; void *x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; BOOL x10; unsigned long long x11; BOOL x12; unsigned long long x13; char *x14; } *)arg0;
+ (id)typeInfosWithSpecificationLSDA:(struct HMDLandingSpecificData { BOOL x0; unsigned int x1; struct { void *x0; char *x1; void *x2; void *x3; } x2; struct { long long x0; char *x1; unsigned char x2; } x3; unsigned long long x4; void *x5; void *x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; BOOL x10; unsigned long long x11; BOOL x12; unsigned long long x13; char *x14; } *)arg0;

- (void)setType_info:(void *)arg0;
- (void)setObjcCatchID:(BOOL)arg0;
- (void)setObjcClass:(Class)arg0;
- (void *)type_info;
- (BOOL)objcCatchID;
- (void).cxx_destruct;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;
- (void)setName:(const char *)arg0;
- (const char *)name;
- (Class)objcClass;

@end