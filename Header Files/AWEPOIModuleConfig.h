//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOIModuleConfig : NSObject <AWEPOIModuleConfig>

@property (class, readonly, nonatomic) BOOL collectPOIEnabled;
@property (class, readonly, nonatomic) BOOL sharePOIEnabled;
@property (class, readonly, nonatomic) BOOL morePOIEnabled;
@property (class, readonly, nonatomic) BOOL labelDisableLocalizations;
@property (class, readonly, nonatomic) BOOL shouldRequestLocationWhenHasNoPermission;
@property (class, readonly, nonatomic) BOOL enableLocateRedo;
@property (class, readonly, nonatomic) BOOL poiDetailHighlightDistance;
@property (class, readonly, nonatomic) BOOL canEnterLiveRoomWhenNotLogin;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)collectPOIEnabled;
+ (BOOL)sharePOIEnabled;
+ (BOOL)morePOIEnabled;
+ (BOOL)labelDisableLocalizations;
+ (BOOL)shouldRequestLocationWhenHasNoPermission;
+ (BOOL)enableLocateRedo;
+ (BOOL)poiDetailHighlightDistance;
+ (BOOL)canEnterLiveRoomWhenNotLogin;

@end