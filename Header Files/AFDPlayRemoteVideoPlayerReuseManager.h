//
//     Generated by private class-dump
//

@class UIViewController;
@protocol AWEAwemePlayVideoViewControllerProtocol;

@interface AFDPlayRemoteVideoPlayerReuseManager : NSObject {
    UIViewController<AWEAwemePlayVideoViewControllerProtocol> *_tempHoldPlayer;
}

@property (retain, nonatomic) UIViewController<AWEAwemePlayVideoViewControllerProtocol> *tempHoldPlayer;

+ (id)shareInstance;

- (void)enqueuePlayer:(id)arg0;
- (id)dequeuePlayerWithAwemeModel:(id)arg0;
- (void)setTempHoldPlayer:(id)arg0;
- (id)tempHoldPlayer;
- (void).cxx_destruct;

@end