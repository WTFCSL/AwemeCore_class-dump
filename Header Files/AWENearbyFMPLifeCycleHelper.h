//
//     Generated by private class-dump
//

@interface AWENearbyFMPLifeCycleHelper : NSObject

+ (void)c2FeedUpdateHalfScreenLocationCache:(BOOL)arg0 pageType:(long long)arg1;
+ (void)c2DidLoadWithPageType:(long long)arg0;
+ (void)c2DidAppearWithPageType:(long long)arg0;
+ (void)c2WillDisappearWithPageType:(long long)arg0;
+ (void)c2DiamondRequestFailWithPageType:(long long)arg0;
+ (void)c2FeedStartShowWithPageType:(long long)arg0;
+ (void)c2FeedFinishWithDataCount:(unsigned long long)arg0 pageType:(long long)arg1;
+ (void)c2FeedListEndReloadWithPageType:(long long)arg0;
+ (void)c2FeedRequestEmptyWithPageType:(long long)arg0;
+ (void)c2FeedRequestFailWithPageType:(long long)arg0;
+ (void)c2DiamondDidShowParams:(id)arg0 renderTime:(double)arg1 error:(id)arg2 pageType:(long long)arg3;
+ (void)c2DiamondStartRequestWithPageType:(long long)arg0;
+ (void)c2DiamondUpdatePreload:(BOOL)arg0 pageType:(long long)arg1;
+ (void)c2FeedDidLogoutWithPageType:(long long)arg0;
+ (void)c2FeedEndRequestWithPageType:(long long)arg0;
+ (void)c2FeedStartSetCoverWithPageType:(long long)arg0;
+ (void)c2FeedFinishCoverTimeStamp:(id)arg0 pageType:(long long)arg1;
+ (void)c2FeedStartRequestWithPageType:(long long)arg0;
+ (void)c2FeedUpdatePreload:(BOOL)arg0 pageType:(long long)arg1;
+ (void)c2FeedUpdateCache:(BOOL)arg0 pageType:(long long)arg1;
+ (void)feedStartRequest;
+ (void)feedRequestFail;
+ (void)feedRequestEmpty;
+ (void)diamondRequestFail;
+ (void)diamondRequestEmpty;
+ (void)diamondDidShowParams:(id)arg0 renderTime:(double)arg1 error:(id)arg2;
+ (void)willShowSkyLightGeckoExist:(BOOL)arg0;
+ (void)skylightDidShow;
+ (void)c2FeedChangeFmpEndTimeStamp:(id)arg0 pageType:(long long)arg1;
+ (void)c2FeedDidShowParams:(id)arg0 pageType:(long long)arg1;
+ (void)feedDidShowParams:(id)arg0;
+ (void)feedShowFailReason:(id)arg0;
+ (void)didLoadAweme:(id)arg0 preloadType:(long long)arg1;
+ (void)feedWillstartRequestWithDegradationTime:(long long)arg0;
+ (void)c2DiamondStartShowWithPageType:(long long)arg0;
+ (void)c2DiamondRequestEmptyWithPageType:(long long)arg0;
+ (void)c2DiamondUpdateCache:(BOOL)arg0 pageType:(long long)arg1;
+ (void)VCDidLoad;
+ (void)VCDidAppear;
+ (void)VCWillDisappear;
+ (void)feedStartShow;
+ (void)didVideoPreload;
+ (void)feedInitFetchDidSuccessWithServerLatency:(id)arg0;
+ (void)diamondUpdatePreload:(BOOL)arg0;
+ (void)diamondUpdateCache:(BOOL)arg0;
+ (void)diamondUpdateHalfScreenLocationCache:(BOOL)arg0;
+ (void)initialize;

@end
