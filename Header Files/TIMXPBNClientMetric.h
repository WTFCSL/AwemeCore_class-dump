//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface TIMXPBNClientMetric : GPBMessage

@property (nonatomic) int metricType;
@property (nonatomic) BOOL hasMetricType;
@property (copy, nonatomic) NSString *k;
@property (nonatomic) BOOL hasK;
@property (nonatomic) long long v;
@property (nonatomic) BOOL hasV;
@property (retain, nonatomic) NSMutableDictionary *tags;
@property (readonly, nonatomic) unsigned long long tags_Count;

+ (id)descriptor;

@end