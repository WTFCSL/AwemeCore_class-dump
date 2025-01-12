//
//     Generated by private class-dump
//

@protocol IESGCPLiveAndienceEntranceService <NSObject>

@property (readonly, nonatomic) long long currentLocation;
@property (readonly, nonatomic) long long fromType;
@property (readonly, nonatomic) BOOL toolbarInAnimation;
@property (readonly, nonatomic) double entranceShowTime;

- (void)playCombineOutAnimationWithCompletion:(id /* block */)arg0;
- (void)playCombineBackAnimationWithCompletion:(id /* block */)arg0;
- (BOOL)receivedShowEntranceMsg;
- (double)receivedShowEntranceMsgTime;
- (BOOL)entranceIsShown;
- (BOOL)toolbarInAnimation;
- (double)entranceShowTime;
- (long long)currentLocation;
- (long long)fromType;

@end
