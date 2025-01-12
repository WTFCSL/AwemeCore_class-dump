//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEECommerceModule : NSObject <HTSAppLifeCycle> {
    BOOL _isOpenOtherApp;
    BOOL _isOpenFromOtherApp;
    NSDictionary *_trackParamForOpenOtherApp;
    double _openAppRecordTime;
}

@property (nonatomic) BOOL isOpenFromOtherApp;
@property (nonatomic) BOOL isOpenOtherApp;
@property (retain, nonatomic) NSDictionary *trackParamForOpenOtherApp;
@property (nonatomic) double openAppRecordTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ecommerceModule;
+ (unsigned long long)priority;

- (void)onAppDidBecomeActive;
- (BOOL)onHandleAppOpenUrl;
- (BOOL)onHandleAppContinueUserActivity;
- (void)setIsOpenOtherApp:(BOOL)arg0;
- (void)setTrackParamForOpenOtherApp:(id)arg0;
- (void)setOpenAppRecordTime:(double)arg0;
- (void)setIsOpenFromOtherApp:(BOOL)arg0;
- (BOOL)isOpenOtherApp;
- (id)trackParamForOpenOtherApp;
- (BOOL)isOpenFromOtherApp;
- (double)openAppRecordTime;
- (void)resetParam;
- (void).cxx_destruct;

@end
