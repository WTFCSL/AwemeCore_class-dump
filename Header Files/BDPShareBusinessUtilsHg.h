//
//     Generated by private class-dump
//

@class NSString, NSMapTable, BDPMultiDelegateProxy;
@protocol BDPShareBusinessHandler_HG;

@interface BDPShareBusinessUtilsHg : NSObject <BDPWarmBootMessage, BDPAppRouteChangeMessage> {
    NSMapTable *_webURLShareParams;
    BDPMultiDelegateProxy<BDPShareBusinessHandler_HG> *_defaultHandlers;
    NSMapTable *_channelHandlers;
    id /* block */ _isBottomBarShowBlk;
}

@property (retain) NSMapTable *webURLShareParams;
@property (retain) BDPMultiDelegateProxy<BDPShareBusinessHandler_HG> *defaultHandlers;
@property (retain) NSMapTable *channelHandlers;
@property (copy, nonatomic) id /* block */ isBottomBarShowBlk;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (void)startShareWithUniqueID:(id)arg0 channel:(id)arg1;
+ (void)dispatchShareBusinessForChannel:(id)arg0 withParams:(id)arg1 uniqueID:(id)arg2 callback:(id /* block */)arg3;
+ (void)registerShareBusinessHandler:(id)arg0;
+ (id)buildSharePrepareModelWithUniqueID:(id)arg0 params:(id)arg1;
+ (void)registerShareBusinessHandler:(id)arg0 forChannel:(id)arg1;
+ (void)startShareWithUniqueID:(id)arg0 from:(id)arg1 target:(id)arg2 channel:(id)arg3;
+ (BOOL)isBottomBarShow;
+ (void)setIsBottomBarShowBlk:(id /* block */)arg0;
+ (id)generateSchemaWithSchema:(id)arg0 params:(id)arg1;
+ (id)sharedInstance;

- (void)cleanWarmCacheWithUniqueID:(id)arg0;
- (void)setWebURLShareParams:(id)arg0;
- (void)setDefaultHandlers:(id)arg0;
- (void)setChannelHandlers:(id)arg0;
- (id)defaultHandlers;
- (id)channelHandlers;
- (id /* block */)isBottomBarShowBlk;
- (id)webURLShareParams;
- (void)setIsBottomBarShowBlk:(id /* block */)arg0;
- (id)init;
- (void).cxx_destruct;

@end
