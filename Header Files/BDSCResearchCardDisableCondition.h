//
//     Generated by private class-dump
//

@class NSString;

@interface BDSCResearchCardDisableCondition : NSObject <BDModelCustom> {
    BOOL _needHideIfConsume;
    long long _noConsumeShowTimes;
}

@property (nonatomic) long long noConsumeShowTimes;
@property (nonatomic) BOOL needHideIfConsume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (long long)noConsumeShowTimes;
- (void)setNoConsumeShowTimes:(long long)arg0;
- (BOOL)needHideIfConsume;
- (void)setNeedHideIfConsume:(BOOL)arg0;

@end