//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWEOnlineABTestManager : NSObject {
    NSDictionary *_abTestData;
}

@property (copy) NSDictionary *abTestData;

+ (id)sharedManager;

- (void)setAbTestData:(id)arg0;
- (id)abTestData;
- (id)onlineDataWithABTestInfoModel:(id)arg0;
- (id)onlineDataWithPropertyName:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
