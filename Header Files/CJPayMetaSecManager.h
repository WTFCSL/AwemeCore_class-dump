//
//     Generated by private class-dump
//

@class NSString;
@protocol CJMetaSecDelegate;

@interface CJPayMetaSecManager : NSObject <CJPayMetaSecService> {
    id<CJMetaSecDelegate> _delegate;
}

@property (retain, nonatomic) id<CJMetaSecDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerProtocol;
+ (id)defaultService;

- (void)registerScenePageNameCallback:(long long)arg0 cb:(id)arg1;
- (void)reportForScene:(id)arg0;
- (void)i_registerMetaSecDelegate:(id)arg0;
- (void)reportForSceneType:(long long)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
