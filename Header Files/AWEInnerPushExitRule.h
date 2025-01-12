//
//     Generated by private class-dump
//

@class NSString;

@interface AWEInnerPushExitRule : MTLModel <MTLJSONSerializing> {
    NSString *_name;
    unsigned long long _actionType;
    long long _actionCount;
    double _hiddenPeriod;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) long long actionCount;
@property (nonatomic) double hiddenPeriod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (double)hiddenPeriod;
- (void)setHiddenPeriod:(double)arg0;
- (void)setActionType:(unsigned long long)arg0;
- (unsigned long long)actionType;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;
- (long long)actionCount;
- (void)setActionCount:(long long)arg0;

@end
