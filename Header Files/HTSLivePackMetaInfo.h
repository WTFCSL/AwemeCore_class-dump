//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface HTSLivePackMetaInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *env;
@property (copy, nonatomic) NSString *dc;
@property (copy, nonatomic) NSString *traceId;
@property (copy, nonatomic) NSString *cluster;
@property (retain, nonatomic) NSMutableDictionary *extras;
@property (readonly, nonatomic) unsigned long long extras_Count;

+ (id)descriptor;

@end
