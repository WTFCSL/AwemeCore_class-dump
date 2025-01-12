//
//     Generated by private class-dump
//

@interface AFDNonVideoInsertCompeteItem : NSObject {
    BOOL _needInsert;
    long long _bizType;
    long long _priority;
    double _proportion;
}

@property (readonly, nonatomic) long long bizType;
@property (readonly, nonatomic) long long priority;
@property (readonly, nonatomic) double proportion;
@property (readonly, nonatomic) BOOL needInsert;

- (long long)bizType;
- (BOOL)needInsert;
- (double)proportion;
- (id)__competeInfos;
- (id)initWithBizType:(long long)arg0 needInsert:(BOOL)arg1;
- (void)updateProportion:(double)arg0;
- (id)description;
- (long long)priority;

@end
