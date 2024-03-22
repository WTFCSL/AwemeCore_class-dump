//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWEFeedBSConditionParser : NSObject {
    NSMutableArray *_cachedCondition;
    NSMutableArray *_cachedConditionList;
}

@property (retain, nonatomic) NSMutableArray *cachedCondition;
@property (retain, nonatomic) NSMutableArray *cachedConditionList;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (id)parseCondition;
- (id)getConditionByNumberReverse:(id)arg0;
- (id)getConfigConditionList;
- (id)cachedCondition;
- (void)setCachedCondition:(id)arg0;
- (id)cachedConditionList;
- (void)setCachedConditionList:(id)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end