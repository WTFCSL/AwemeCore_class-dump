//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWEHPPintopConfigManager : NSObject {
    NSDictionary *_modelMap;
}

@property (retain, nonatomic) NSDictionary *modelMap;

+ (id)shareInstance;

- (id)getConfigChannelModelWithTabID:(id)arg0;
- (id)modelMap;
- (void)setupOld;
- (void)setModelMap:(id)arg0;
- (id)transformNewModelWithOld:(id)arg0;
- (void).cxx_destruct;
- (void)setUp;

@end
