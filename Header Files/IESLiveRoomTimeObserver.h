//
//     Generated by private class-dump
//

@interface IESLiveRoomTimeObserver : NSObject {
    long long _liveTime;
    id /* block */ _action;
}

@property (nonatomic) long long liveTime;
@property (copy, nonatomic) id /* block */ action;

- (long long)liveTime;
- (void)setLiveTime:(long long)arg0;
- (void).cxx_destruct;
- (void)setAction:(id /* block */)arg0;
- (id /* block */)action;

@end
