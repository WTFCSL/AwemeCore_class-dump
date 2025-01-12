//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEECBcmTrackChecker : NSObject {
    BOOL _enable;
    NSArray *_bstGroupTypeCheckEvents;
    NSArray *_bstFormInfoCheckEvents;
    NSArray *_btmCheckEvents;
}

@property (class, readonly) AWEECBcmTrackChecker *shared;

@property (nonatomic) BOOL enable;
@property (copy, nonatomic) NSArray *bstGroupTypeCheckEvents;
@property (copy, nonatomic) NSArray *bstFormInfoCheckEvents;
@property (copy, nonatomic) NSArray *btmCheckEvents;

+ (id)shared;

- (void)setBstGroupTypeCheckEvents:(id)arg0;
- (void)setBstFormInfoCheckEvents:(id)arg0;
- (void)setBtmCheckEvents:(id)arg0;
- (void)checkBstGroupTypeWithEvent:(id)arg0 params:(id)arg1;
- (void)checkBstFormInfoWithEvent:(id)arg0 params:(id)arg1;
- (void)checkBtmWithEvent:(id)arg0 params:(id)arg1;
- (id)btmCheckEvents;
- (id)bstGroupTypeCheckEvents;
- (id)checkEntranceInfoWithEvent:(id)arg0 params:(id)arg1;
- (id)bstFormInfoCheckEvents;
- (void)checkEvent:(id)arg0 params:(id)arg1;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)arg0;

@end
