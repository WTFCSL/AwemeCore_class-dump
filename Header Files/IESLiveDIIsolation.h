//
//     Generated by private class-dump
//

@class NSSet, NSNumber;

@interface IESLiveDIIsolation : NSObject {
    NSNumber *_canEnterMultiInstanceRoom;
    NSSet *_liveServices;
}

@property (retain, nonatomic) NSSet *liveServices;
@property (retain, nonatomic) NSNumber *canEnterMultiInstanceRoom;

- (id)liveServices;
- (id)canEnterMultiInstanceRoom;
- (BOOL)containService:(id)arg0;
- (void)setCanEnterMultiInstanceRoom:(id)arg0;
- (void)setLiveServices:(id)arg0;
- (void).cxx_destruct;

@end