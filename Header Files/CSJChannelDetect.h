//
//     Generated by private class-dump
//

@class NSDictionary;

@interface CSJChannelDetect : NSObject {
    NSDictionary *_collectRitDic;
}

@property (copy) NSDictionary *collectRitDic;

+ (id)sharedInstance;

- (void)setCollectRitDic:(id)arg0;
- (id)collectRitDic;
- (BOOL)isDemoApp;
- (id)getClassName:(id)arg0;
- (BOOL)canCollect;
- (BOOL)alreadyCollect:(id)arg0;
- (id)getProtocolList:(id)arg0;
- (id)getIvarList:(id)arg0;
- (void)reportInfo:(id)arg0 slot:(id)arg1;
- (void)collectInfo:(id)arg0 caller:(id)arg1 slot:(id)arg2;
- (BOOL)isValid:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
