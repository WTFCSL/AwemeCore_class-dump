//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWEPlayVideoTrackParamsModel : NSObject {
    NSDictionary *_defaultParams;
    NSDictionary *_playerExtraParams;
    NSDictionary *_trackedEventParams;
}

@property (retain, nonatomic) NSDictionary *trackedEventParams;
@property (copy, nonatomic) NSDictionary *defaultParams;
@property (copy, nonatomic) NSDictionary *playerExtraParams;

- (id)defaultParams;
- (void)setDefaultParams:(id)arg0;
- (void)recordTrackedEvent:(id)arg0 params:(id)arg1;
- (id)playerExtraParams;
- (void)setPlayerExtraParams:(id)arg0;
- (id)trackedEventParams;
- (void)setTrackedEventParams:(id)arg0;
- (void).cxx_destruct;

@end
