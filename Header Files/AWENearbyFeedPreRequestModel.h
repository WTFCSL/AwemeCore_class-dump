//
//     Generated by private class-dump
//

@class NSArray;

@interface AWENearbyFeedPreRequestModel : NSObject {
    BOOL _isReqOnAir;
    NSArray *_dataWillShowInFmp;
    id /* block */ _completionWhenWillEnterNearby;
}

@property (nonatomic) BOOL isReqOnAir;
@property (copy, nonatomic) NSArray *dataWillShowInFmp;
@property (copy, nonatomic) id /* block */ completionWhenWillEnterNearby;

- (BOOL)isReqOnAir;
- (void)setIsReqOnAir:(BOOL)arg0;
- (id)dataWillShowInFmp;
- (void)setDataWillShowInFmp:(id)arg0;
- (id /* block */)completionWhenWillEnterNearby;
- (void)setCompletionWhenWillEnterNearby:(id /* block */)arg0;
- (void).cxx_destruct;

@end
