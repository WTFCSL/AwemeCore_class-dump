//
//     Generated by private class-dump
//

@interface AWERadarRouter : NSObject

@property (class, nonatomic) BOOL hasOpenRadar;

+ (BOOL)hasOpenRadar;
+ (void)openRadarIfAvailable:(id)arg0;
+ (void)setHasOpenRadar:(BOOL)arg0;
+ (void)customTransitionWithInfo:(id)arg0 description:(id)arg1 needUploadLoaction:(BOOL)arg2;
+ (void)customTransitionWithInfo:(id)arg0 description:(id)arg1 needUploadLoaction:(BOOL)arg2 transToRadarMainVC:(BOOL)arg3;
+ (BOOL)willNotTransfer;
+ (void)transToViewController:(id)arg0 needUploadLoaction:(BOOL)arg1;
+ (BOOL)isTopVCShouldDismiss;

@end
