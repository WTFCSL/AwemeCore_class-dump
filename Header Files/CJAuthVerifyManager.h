//
//     Generated by private class-dump
//

@class NSString;
@protocol CJPayAPIDelegate;

@interface CJAuthVerifyManager : NSObject <CJPayAuthService> {
    id<CJPayAPIDelegate> _apiDelegate;
}

@property (weak, nonatomic) id<CJPayAPIDelegate> apiDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerComponents;
+ (id)defaultService;

- (void)openAuthDeskWithParams:(id)arg0 callBack:(id /* block */)arg1;
- (void)i_authWith:(id)arg0 delegate:(id)arg1;
- (void)p_reportMonitor:(unsigned long long)arg0 requestParams:(id)arg1;
- (id)apiDelegate;
- (void)setApiDelegate:(id)arg0;
- (void).cxx_destruct;

@end