//
//     Generated by private class-dump
//

@class NSString;

@interface HTSLiveFeatureValue : IESLivePBBaseMessage

@property (nonatomic) int valType;
@property (nonatomic) long long int64Val;
@property (nonatomic) BOOL boolVal;
@property (nonatomic) double float64Val;
@property (copy, nonatomic) NSString *stringVal;

+ (id)descriptor;

- (long long)int64Val;
- (int)valType;

@end
